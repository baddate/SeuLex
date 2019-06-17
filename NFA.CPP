#include<iostream>
#include<vector>
#include<list>
#include<set>
#include<string> 
#include<iterator>
#include "NFA.h"
using namespace std;


NFANode::NFANode(){}
NFANode::NFANode(int stateNum, int name){
	this->stateNum = stateNum;
	this->name = name;
}
bool NFANode::nodeequal(NFANode &node){
	if(node.stateNum == this->stateNum) return true;
	else return false;
}



DFANode::DFANode(){}
DFANode::DFANode(int stateNum){
	this->stateNum = stateNum;
}
void DFANode::addname(int name){
	this->names.insert(name);
}
bool DFANode::nodeequal(DFANode &node){
	if(node.stateNum == this->stateNum) return true;
	else return false;
}




NFAPath::NFAPath(){}
NFAPath::NFAPath(NFANode &firstnode,NFANode &secondnode,char &pathchar){
	this->firstnode = firstnode;
	this->secondnode = secondnode;
	this->pathchar = pathchar;
}
bool NFAPath::pathequal(NFAPath &path){
	if(this->firstnode.nodeequal(path.firstnode)
		&& this->secondnode.nodeequal(path.secondnode)
		&& this->pathchar == path.pathchar)
		return true;
	else return false;
}
void NFAPath::printpath(){
	cout<<this->firstnode.stateNum<<"  "
		<<this->pathchar<<"  "
		<<this->secondnode.stateNum<<endl;
}



DFAPath::DFAPath(){}
DFAPath::DFAPath(DFANode &firstnode,DFANode &secondnode,char &pathchar){
	this->firstnode = firstnode;
	this->secondnode = secondnode;
	this->pathchar = pathchar;
}
void DFAPath::setpara(DFANode &firstnode,DFANode secondnode,char &pathchar){
	this->firstnode = firstnode;
	this->secondnode = secondnode;
	this->pathchar = pathchar;
}
void DFAPath::sethead(DFANode firstnode){
	this->firstnode = firstnode;
}
void DFAPath::settail(DFANode secondnode){
	this->secondnode = secondnode;
}
bool DFAPath::pathequal(DFAPath &path){
	if(path.firstnode.nodeequal(firstnode) && path.secondnode.nodeequal(secondnode)
		&& path.pathchar == pathchar)
		return true;
	else return false;
}
void DFAPath::printpath(){
	cout<<this->firstnode.stateNum<<"  "
		<<this->pathchar<<"  "
		<<this->secondnode.stateNum<<endl;
}

int stateNumberGenerator = -1;
char nul = 01;

bool charlistcontain(list<char> &li,char &ch){
	list<char>::iterator i;
	for(i = li.begin();i!=li.end();i++){
		if(*i == ch) return true;
	}
	return false;
}

bool listcontain(list<NFANode> &li,NFANode &node){
	list<NFANode>::iterator i;
	for(i = li.begin();i!=li.end();i++){
		if((*i).nodeequal(node)) return true;
	}
	return false;
}

bool listcompare(list<NFANode> &li1,list<NFANode> &li2){
	if(li1.size() != li2.size()) return false;
	else{
		list<NFANode>::iterator i;
		for(i = li2.begin();i!=li2.end();i++){
			if(!listcontain(li1,*i)) return false;
		}
		return true;
	}
}

int nfalistcontain(list<list<NFANode> > &lif, list<NFANode> &li){
	list<list<NFANode> >::reverse_iterator i;
	int j = lif.size();
	for(i = lif.rbegin();i!=lif.rend();i++){
		j--;
		if(listcompare(*i,li)) return j;
	}
	return -1;
}

string getstringposition(list<string> &lif, string &li){
	list<string>::iterator i;
	for(i = lif.begin();i!=lif.end();i++){
		if((*i).compare(li) == 0) {
			i++;
			return *i;
		}
	}
	return "";
}

string getstringbyindex(list<string> lif, int in){
	list<string>::iterator i;
	for(i = lif.begin();i!=lif.end();i++){
		if(in == 0) return *i;
		in--;
	}
	return "";
}

bool dfalistcontain(list<DFANode> &li,DFANode &node){
	list<DFANode>::iterator i;
	for(i = li.begin();i!=li.end();i++){
		if((*i).nodeequal(node)) return true;
	}
	return false;
}

int getdfaposition(list<list<DFANode> > &lif, DFANode &node){
	list<list<DFANode> >::iterator i;
	int j = -1;
	for(i = lif.begin();i!=lif.end();i++){
		j++;
		if(dfalistcontain(*i,node)) return j;
	}
	return -1;
}


void mergelist(list<NFANode> &li1,list<NFANode> li2){
	list<NFANode>::iterator i;
	for(i = li2.begin();i!=li2.end();i++){
		if(!listcontain(li1,*i)) li1.push_back(*i);
	}
}

DFANode searchbyindex(list<DFANode> li,int &in){
	list<DFANode>::iterator i;
	for(i = li.begin();i!=li.end();i++){
		if(in == 0) return *i;
		in--;
	}
	i--;
	return *i; 
}

int generateStateNumber(){
	stateNumberGenerator++;
	return stateNumberGenerator;
}


DFA::DFA(){}
DFA::DFA(DFANode &headNode,DFANode &tailNode){
	this->headNode = headNode;
    this->tailNode.push_back(tailNode);
}
void DFA::sethead(DFANode &headNode){
	this->headNode = headNode;
}
void DFA::addtail(DFANode &tailNode){
	this->tailNode.push_back(tailNode);
}
void DFA::addpath(DFAPath &path){
	this->push_back(path);
}
void DFA::printDFA(){
	list<DFAPath>::iterator i;
	for(i = this->begin();i!=this->end();i++){
		(*i).printpath();
	}
}
void DFA::printtail(){
	list<DFANode>::iterator i;
	for(i = tailNode.begin();i!=tailNode.end();i++){
		cout<<(*i).stateNum<<endl;
	}
}
list<char> DFA::getcharlist(){
	list<char> re;
	list<DFAPath>::iterator i;
	for(i = this->begin();i!=this->end();i++){
		if(!charlistcontain(re,(*i).pathchar)) re.push_back((*i).pathchar);
	}
	return re;
}
list<DFANode> DFA::getnontailnode(){
	list<DFANode> re;
	list<DFAPath>::iterator i;
	for(i = this->begin();i!=this->end();i++){
		if(!dfalistcontain(tailNode,(*i).firstnode) && !dfalistcontain(re,(*i).firstnode)) re.push_back((*i).firstnode);
	}
	return re;
}
DFANode DFA::symbolmove(DFANode &node,char &ch){
	DFANode no(0);
	list<DFAPath>::iterator i;
	for(i = this->begin();i!=this->end();i++){
		if((*i).pathchar == ch && (*i).firstnode.nodeequal(node)) return (*i).secondnode;
	}
	return no;
}
bool DFA::symbolmovecompare(DFANode &node1,DFANode &node2,list<list<DFANode> > &li){
	DFANode tem1,tem2;
	list<list<DFANode> >::iterator j;
	list<char> charli = getcharlist();
	list<char>::iterator i;
	for(i = charli.begin();i!=charli.end();i++){
		tem1 = symbolmove(node1,*i);
		tem2 = symbolmove(node2,*i);
		if(tem1.stateNum != tem2.stateNum){
			if(tem1.stateNum == 0 || tem2.stateNum == 0) return false;
			for(j = li.begin();j!=li.end();j++){
				if(dfalistcontain(*j,tem1) != dfalistcontain(*j,tem2)) return false;
			}
		}
	}
	return true;
}
void DFA::clearrepeatdfa(){
	list<DFAPath>::iterator i;
	list<DFAPath>::iterator j;
	list<DFAPath>::iterator k;
	for(i = this->begin(); i != this->end(); i++){
		k = i;
		k++;
		for(j = k; j != this->end();){
			if((*i).pathequal(*j)) j = this->erase(j);
			else j++;
		}
	}
}
void DFA::minimize(){
	int v = 0;
	this->clearrepeatdfa();
	bool flag;
	int dfasize;
	list<list<DFANode> > lis;
	list<DFANode> tem;
	list<DFANode>::iterator x;
	list<DFANode> tailtem = tailNode;
	while(!tailtem.empty()){
		for(x = tailtem.begin();x!=tailtem.end();){
			if(*((*x).names.begin()) == v){
				tem.push_back(*x);
				x = tailtem.erase(x);
			}
			else x++;
		}
		lis.push_back(tem);
		tem.clear();
		v++;
	}
	lis.push_back(getnontailnode());
	list<list<DFANode> > liscomp = lis;
	list<list<DFANode> >::iterator i;
	list<DFANode>::iterator j;
	list<DFANode>::iterator k;
	list<DFANode>::iterator n;
	for(i = liscomp.begin();i!=liscomp.end();){
		dfasize = (*i).size();
		if(dfasize > 1){
			flag = true;
			for(j = (*i).begin();j!=(*i).end();j++)
			{
				n = j;
				n++;
				tem.clear();
				tem.push_back(*j);
				for(k = n;k!=(*i).end();)
				{
					if(symbolmovecompare(*j,*k,lis)){
						tem.push_back(*k);
						k = (*i).erase(k);
					}
					else k++;
				}
				if(tem.size() == dfasize){
					*i = tem;
					flag = false;
					break;
				}
				else liscomp.push_back(tem);
			}
			if(flag){
				liscomp.erase(i);
			    lis = liscomp;
				i = liscomp.begin();
			}
			else i++;
		}
		else i++;
	}
	
	set<int>::iterator l;
	list<DFAPath>::iterator m;
	DFANode newnode;
	int index;
	flag = true;
	tem.clear();
	for(i = lis.begin();i!=lis.end();i++){
		//cout<<liscomp.size()<<endl;
		newnode = DFANode(generateStateNumber());
		if(flag && dfalistcontain(*i,headNode)){
			headNode = newnode;
			flag = false;
		}
		for(j = (*i).begin();j!=(*i).end();j++){
			if(dfalistcontain(tailNode,*j)){
				newnode.addname(*((*j).names.begin()));
			}
		}
		tem.push_back(newnode);
	}
	for(m = this->begin();m!=this->end();m++){
		index =	getdfaposition(lis,(*m).firstnode);
		(*m).sethead(searchbyindex(tem,index));
		index =	getdfaposition(lis,(*m).secondnode);
		(*m).settail(searchbyindex(tem,index));
	}
	this->clearrepeatdfa();
	tailNode.clear();
	for(j = tem.begin();j!=tem.end();j++){
		if(!(*j).names.empty()) tailNode.push_back(*j);
	}
}

NFA::NFA(){}
NFA::NFA(NFANode &headNode,NFANode &tailNode){
	this->headNode = headNode;
    this->tailNode.push_back(tailNode);
	this->name = tailNode.name;
}
void NFA::setheadtail(NFANode &headNode,NFANode &tailNode){
	this->headNode = headNode;
	this->tailNode.clear();
    this->tailNode.push_back(tailNode);
	this->name = tailNode.name;
}
void NFA::addtail(NFANode &tailNode){
	this->tailNode.push_back(tailNode);
}
void NFA::addhead(NFANode &headNode){
	this->headNode = headNode;
}
void NFA::addpath(NFAPath &path){
	this->push_back(path);
}
void NFA::addNFA(NFA &nfa){
	list<NFAPath>::iterator i;
	for(i = nfa.begin();i!=nfa.end();i++){
		this->addpath(*i);
	}
}
bool NFA::havepath(NFAPath &path){
	list<NFAPath>::iterator i;
	for(i = this->begin();i != this->end();i++){
		if((*i).pathequal(path)) return true;
	}
	return false;
}
void NFA::printNFA(){
	list<NFAPath>::iterator i;
	for(i = this->begin();i!=this->end();i++){
		(*i).printpath();
	}
}
list<NFANode> NFA::Eclosure(NFANode &node){
	list<NFANode> closure;
	closure.push_back(node);
	list<NFANode>::iterator j;
	list<NFAPath>::iterator i;
	for(j = closure.begin();j!=closure.end();j++){
		for(i = this->begin();i!=this->end();i++){
			if((*i).pathchar == nul && (*i).firstnode.nodeequal(*j) && !listcontain(closure,(*i).secondnode)) 
				closure.push_back((*i).secondnode);
		}
	}
	return closure;
}
bool NFA::acceptsymbol(NFANode &node,char &ch){
	list<NFAPath>::iterator i;
	for(i = this->begin();i!=this->end();i++){
		if((*i).pathchar == ch && (*i).firstnode.nodeequal(node)) return true;
	}
	return false;
}
NFANode NFA::symbolmove(NFANode &node,char &ch){
	NFANode no(-1,-1);
	list<NFAPath>::iterator i;
	for(i = this->begin();i!=this->end();i++){
		if((*i).pathchar == ch && (*i).firstnode.nodeequal(node)) return (*i).secondnode;
	}
	return no;
}
list<NFANode> NFA::symbolmoves(list<NFANode> &li,char &ch){
	list<NFANode> re;
	list<NFAPath>::iterator i;
	list<NFANode>::iterator j;
	for(i = this->begin();i!=this->end();i++){
		if((*i).pathchar == ch && listcontain(li,(*i).firstnode)) re.push_back((*i).secondnode);
	}
	if(!re.empty()){
		for(j = re.begin();j!=re.end();j++){
			mergelist(re,Eclosure(*j));
		}
	}
	return re;
}
list<char> NFA::getcharlist(){
	list<char> re;
	list<NFAPath>::iterator i;
	for(i = this->begin();i!=this->end();i++){
		if((*i).pathchar != nul && !charlistcontain(re,(*i).pathchar)) re.push_back((*i).pathchar);
	}
	return re;
}
DFANode NFA::createdfanode(list<NFANode> &li){
	DFANode re(generateStateNumber());
	list<NFANode>::iterator i;
	for(i = li.begin();i!=li.end();i++){
		if(listcontain(tailNode,*i)) re.addname((*i).name);
	}
	return re;
}
DFA NFA::transDFA(){
	int index;
	DFA re;
	DFANode re2;
	DFAPath path;
	list<DFANode> dfanodelist;
	list<list<NFANode> > lis;
	list<NFANode> clo = Eclosure(headNode);
	lis.push_back(clo);
	DFANode re1 = createdfanode(clo);
	dfanodelist.push_back(re1);
	re.sethead(re1);
	if(!re1.names.empty()) re.addtail(re1);
	list<list<NFANode> >::iterator i = lis.begin();
	list<char> charli = this->getcharlist();
	list<char>::iterator j;
	list<DFANode>::iterator k = dfanodelist.begin();
	do{
		re1 = *k;
		for(j = charli.begin();j!=charli.end();j++){
			//cout<<lis.size()<<endl;
			clo = symbolmoves(*i,*j);
			if(!clo.empty()){
				index = nfalistcontain(lis, clo);
				if(index < 0){
					lis.push_back(clo);
					re2 = createdfanode(clo);
					if(!re2.names.empty()) re.addtail(re2);
					dfanodelist.push_back(re2);
					path.setpara(re1,re2,*j);
					re.addpath(path);
				}
				else{
					path.setpara(re1,searchbyindex(dfanodelist,index),*j);
					re.addpath(path);
				}
			}
		}
		i++;
		k++;
	}while(i != lis.end());
	cout<<re.tailNode.size()<<endl;
	return re;
}

void printclosure(list<NFANode> &li){
	list<NFANode>::iterator i;
	for(i = li.begin();i!=li.end();i++){
		cout<<(*i).stateNum<<endl;
	}
}