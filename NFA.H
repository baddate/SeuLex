#ifndef NFA_H
#define NFA_H

#include<iostream>
#include<vector>
#include<list>
#include<set>
#include<string> 
#include<iterator>
using namespace std;

class NFANode{
public:
    int stateNum;
	int name;
public:
	NFANode();
	NFANode(int stateNum, int name);
	bool nodeequal(NFANode &node);
};

class DFANode{
public:
    int stateNum;
	set<int> names;
public:
	DFANode();
	DFANode(int stateNum);
	void addname(int name);
	bool nodeequal(DFANode &node);
};


class NFAPath{
public:
	NFANode firstnode;
	NFANode secondnode;
	char pathchar;
public:
	NFAPath();
	NFAPath(NFANode &firstnode,NFANode &secondnode,char &pathchar);
	bool pathequal(NFAPath &path);
	void printpath();
};

class DFAPath{
public:
	DFANode firstnode;
	DFANode secondnode;
	char pathchar;
public:
	DFAPath();
	DFAPath(DFANode &firstnode,DFANode &secondnode,char &pathchar);
	void setpara(DFANode &firstnode,DFANode secondnode,char &pathchar);
	void sethead(DFANode firstnode);
	void settail(DFANode secondnode);
	bool pathequal(DFAPath &path);
	void printpath();
};

bool charlistcontain(list<char> &li,char &ch);

bool listcontain(list<NFANode> &li,NFANode &node);

bool listcompare(list<NFANode> &li1,list<NFANode> &li2);

int nfalistcontain(list<list<NFANode> > &lif, list<NFANode> &li);

string getstringposition(list<string> &lif, string &li);

string getstringbyindex(list<string> lif, int in);

bool dfalistcontain(list<DFANode> &li,DFANode &node);

int getdfaposition(list<list<DFANode> > &lif, DFANode &node);

void mergelist(list<NFANode> &li1,list<NFANode> li2);

DFANode searchbyindex(list<DFANode> li,int &in);

int generateStateNumber();

class DFA:public list<DFAPath> {
public:
    DFANode headNode;
    list<DFANode> tailNode;
public:
	DFA();
	DFA(DFANode &headNode,DFANode &tailNode);
	void sethead(DFANode &headNode);
	void addtail(DFANode &tailNode);
	void addpath(DFAPath &path);
	void printDFA();
	void printtail();
	list<char> getcharlist();
	list<DFANode> getnontailnode();
	DFANode symbolmove(DFANode &node,char &ch);
	bool symbolmovecompare(DFANode &node1,DFANode &node2,list<list<DFANode> > &li);
	void clearrepeatdfa();
	void minimize();
};

class NFA:list<NFAPath> {
public:
    NFANode headNode;
    list<NFANode> tailNode;
	int name;
public:
	NFA();
	NFA(NFANode &headNode,NFANode &tailNode);
	void setheadtail(NFANode &headNode,NFANode &tailNode);
	void addtail(NFANode &tailNode);
	void addhead(NFANode &headNode);
	void addpath(NFAPath &path);
	void addNFA(NFA &nfa);
	bool havepath(NFAPath &path);
	void printNFA();
	list<NFANode> Eclosure(NFANode &node);
	bool acceptsymbol(NFANode &node,char &ch);
	NFANode symbolmove(NFANode &node,char &ch);
	list<NFANode> symbolmoves(list<NFANode> &li,char &ch);
	list<char> getcharlist();
	DFANode createdfanode(list<NFANode> &li);
	DFA transDFA();
};

void printclosure(list<NFANode> &li);

#endif
