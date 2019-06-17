#include<iostream>
#include<stack>
#include<vector>
#include<list>
#include<set>
#include<string>
#include<fstream> 
#include<iterator>
#include "NFA.h"
using namespace std;

extern char nul;
list<string> title;
list<NFA> titlenfa;
list<string> codelist;

NFA &NonOperator(NFA &oldNFA, char ch, int i){

    NFANode headNode(generateStateNumber(),i);
	//printNFA(headNode);
    NFANode tailNode(generateStateNumber(),i);
	NFAPath path(headNode,tailNode,ch);
    oldNFA = NFA(headNode,tailNode);
	oldNFA.addpath(path);
	//printNFA(*oldNFA.headNode);
	//cout<<generateStateNumber()<<endl;
    return oldNFA;
}

NFA& Star(NFA &oldNFA, int i){
    NFANode newHeadNode(generateStateNumber(),i);
    NFANode newTailNode(generateStateNumber(),i);
	NFAPath path1(newHeadNode,oldNFA.headNode,nul);
	NFAPath path2(newHeadNode,newTailNode,nul);
	NFAPath path3(oldNFA.tailNode.front(),newTailNode,nul);
	NFAPath path4(oldNFA.tailNode.front(),oldNFA.headNode,nul);
	oldNFA.addpath(path1);
	oldNFA.addpath(path2);
	oldNFA.addpath(path3);
	oldNFA.addpath(path4);
    oldNFA.setheadtail(newHeadNode,newTailNode);
    return oldNFA;
}

NFA& Plus(NFA &oldNFA, int i){
    NFANode newHeadNode(generateStateNumber(),i);
    NFANode newTailNode(generateStateNumber(),i);
	NFAPath path1(newHeadNode,oldNFA.headNode,nul);
	NFAPath path2(oldNFA.tailNode.front(),newTailNode,nul);
	NFAPath path3(oldNFA.tailNode.front(),oldNFA.headNode,nul);
    oldNFA.addpath(path1);
	oldNFA.addpath(path2);
	oldNFA.addpath(path3);
    oldNFA.setheadtail(newHeadNode,newTailNode);
    return oldNFA;
}

NFA& Question(NFA &oldNFA, int i){
    NFANode newHeadNode(generateStateNumber(),i);
    NFANode newTailNode(generateStateNumber(),i);
	NFAPath path1(newHeadNode,oldNFA.headNode,nul);
	NFAPath path2(newHeadNode,newTailNode,nul);
	NFAPath path3(oldNFA.tailNode.front(),newTailNode,nul);
	oldNFA.addpath(path1);
	oldNFA.addpath(path2);
	oldNFA.addpath(path3);
    oldNFA.setheadtail(newHeadNode,newTailNode);
    return oldNFA;
}
    
NFA& And(NFA &firstNFA, NFA &secondNFA){
	firstNFA.addNFA(secondNFA);
	NFAPath path(firstNFA.tailNode.front(),secondNFA.headNode,nul);
	firstNFA.addpath(path);
	firstNFA.setheadtail(firstNFA.headNode,secondNFA.tailNode.front());
    return firstNFA;
}

NFA& Or(NFA &firstNFA, NFA &secondNFA, int i){
    firstNFA.addNFA(secondNFA);
	NFAPath path1(firstNFA.headNode,secondNFA.headNode,nul);
	NFAPath path2(secondNFA.tailNode.front(),firstNFA.tailNode.front(),nul);
    firstNFA.addpath(path1);
	firstNFA.addpath(path2);
    return firstNFA;
}

NFA& Bracket(NFA &oldNFA, char &c, int i){
	NFAPath path1(oldNFA.headNode,oldNFA.tailNode.front(),c);
	oldNFA.addpath(path1);
	return oldNFA;
}

bool insertAnd(char c){
	if(c!=')'&&c!='|'&&c!='*'&&c!='+'&&c!='?'&&c!=' ') return true;
	else return false;
}

NFA getFinalNFA(string regExp,int name){
        stack<NFA> nfaStack;
        stack<char> operatorstack;
		operatorstack.push('#');
		NFANode start,end;
		string defn;
		NFA secondNFA;
		NFA firstNFA;
		NFA newNFA;
        for(int i=0;i<regExp.length();i++){
            char cha = regExp[i];
            switch(cha){
                case '(':
                    operatorstack.push('(');
                    break;
                case '|':
					while(operatorstack.top()!='#' && operatorstack.top()!='('){

						if(operatorstack.top()=='.'){
							secondNFA = nfaStack.top();
							nfaStack.pop();
							firstNFA = nfaStack.top();                        
							nfaStack.pop();
							newNFA = And(firstNFA, secondNFA);
							nfaStack.push(newNFA);
							operatorstack.pop();
						}
						else if(operatorstack.top()=='|'){
							secondNFA = nfaStack.top();
							nfaStack.pop();
							firstNFA = nfaStack.top();                        
							nfaStack.pop();
							newNFA = Or(firstNFA, secondNFA, name);
							nfaStack.push(newNFA);
						    operatorstack.pop();
						}
					}
                    operatorstack.push('|');
                    break;
                case '*':
                    secondNFA = nfaStack.top();
                    nfaStack.pop();
                    newNFA = Star(secondNFA,name);
                    nfaStack.push(newNFA);
                    if(i!=regExp.length()-1&&insertAnd(regExp[i+1])){
                        operatorstack.push('.');
                    }
                    break;
				case '+':
                    secondNFA = nfaStack.top();
                    nfaStack.pop();
                    newNFA = Plus(secondNFA,name);
                    nfaStack.push(newNFA);
                    if(i!=regExp.length()-1&&insertAnd(regExp[i+1])){
                        operatorstack.push('.');
                    }
                    break;
				case '?':
                    secondNFA = nfaStack.top();
                    nfaStack.pop();
                    newNFA = Question(secondNFA,name);
                    nfaStack.push(newNFA);
                    if(i!=regExp.length()-1&&insertAnd(regExp[i+1])){
                        operatorstack.push('.');
                    }
                    break;
                case ')':
                    while(operatorstack.top()!='('){
                        secondNFA = nfaStack.top();
                        nfaStack.pop();
                        firstNFA = nfaStack.top();                        
                        nfaStack.pop();
                        if(operatorstack.top()=='.'){
                            newNFA = And(firstNFA, secondNFA);
                            nfaStack.push(newNFA);
                        }
                        else{
                            newNFA = Or(firstNFA, secondNFA,name);
                            nfaStack.push(newNFA);
                        }
                        operatorstack.pop();
                    }
                    operatorstack.pop();
                    if(i!=regExp.length()-1&&regExp[i-1]!='('&&insertAnd(regExp[i+1])){
                        operatorstack.push('.');
                    }
                    break;
				case '\\':
					i++;
					if(regExp[i] == 't') newNFA = NonOperator(newNFA,' ',name);
					else if(regExp[i] == 'n') newNFA = NonOperator(newNFA,'\n',name);
					else newNFA = NonOperator(newNFA,regExp[i],name);
					nfaStack.push(newNFA);
					if(i!=regExp.length()-1&&insertAnd(regExp[i+1])){
                        operatorstack.push('.');
                    }
					break;
				case '"':
					operatorstack.push('"');
					i++;
					while(regExp[i]!='"'){
						newNFA = NonOperator(newNFA,regExp[i],name);
						nfaStack.push(newNFA);
						if(regExp[i+1]!='"') operatorstack.push('.');
						i++;
					}
					while(operatorstack.top()!='"'){
						secondNFA = nfaStack.top();
						nfaStack.pop();
						firstNFA = nfaStack.top();                        
						nfaStack.pop();
						newNFA = And(firstNFA, secondNFA);
						nfaStack.push(newNFA);
						operatorstack.pop();
					}
					operatorstack.pop();
					if(i!=regExp.length()-1&&regExp[i-1]!='"'&&insertAnd(regExp[i+1])){
                        operatorstack.push('.');
                    }
					break;
				case '[':
					i++;
					start = NFANode(generateStateNumber(),name);
					end = NFANode(generateStateNumber(),name);
					newNFA = NFA(start,end);
					while(regExp[i]!=']'){
						if(regExp[i]!='-') Bracket(newNFA,regExp[i],name);
						else{
							for(char c = regExp[i-1]+1;c < regExp[i+1];c++)
								Bracket(newNFA,c,name);
						}
						i++;
					}
					nfaStack.push(newNFA);
					if(i!=regExp.length()-1&&insertAnd(regExp[i+1])){
                        operatorstack.push('.');
                    }
					break;
				case '{':
					defn = "";
					i++;
					while(regExp[i]!='}'){
						defn.append(1,regExp[i]);
						i++;
					}
					defn = getstringposition(title,defn);
					newNFA = getFinalNFA(defn,name);
					nfaStack.push(newNFA);
					if(i!=regExp.length()-1&&insertAnd(regExp[i+1])){
                        operatorstack.push('.');
                    }
					break;
                default:
                    newNFA = NonOperator(newNFA,cha,name);
					//newNFA.printNFA();
					nfaStack.push(newNFA);
                    if(i!=regExp.length()-1&&insertAnd(regExp[i+1])){
                        operatorstack.push('.');
                    }
                    break;
            }
        }
        while(operatorstack.top()!='#'){
			secondNFA = nfaStack.top();
            nfaStack.pop();
            firstNFA = nfaStack.top();                        
            nfaStack.pop();
            if(operatorstack.top()=='.'){
				newNFA = And(firstNFA, secondNFA);
                nfaStack.push(newNFA);
            }
            else{
				newNFA = Or(firstNFA, secondNFA, name);
                nfaStack.push(newNFA);
			}
			operatorstack.pop();
		}
		//(nfaStack.top()).printNFA();
		return nfaStack.top();     
}

void dfafileout(DFA &dfa,ofstream &out){
	out <<"#include<iostream>\n#include<string>\nusing namespace std;\nstring s = \"\";\n";
	int tem;
	list<DFANode> dfanodelist;
	list<DFAPath>::iterator i;
	for(i = dfa.begin(); i != dfa.end(); i++){
		if(!dfalistcontain(dfanodelist,(*i).firstnode)){
			dfanodelist.push_back((*i).firstnode);
			out <<"bool state"<<(*i).firstnode.stateNum<<"(ifstream &in,ofstream &out);\n";
		}
		if(!dfalistcontain(dfanodelist,(*i).secondnode)){
			dfanodelist.push_back((*i).secondnode);
			out <<"bool state"<<(*i).secondnode.stateNum<<"(ifstream &in,ofstream &out);\n";
		}
	}
	out << '\n';
	list<DFANode>::iterator j;
	for(j = dfanodelist.begin(); j != dfanodelist.end(); j++){
		out << "bool state";
		out << (*j).stateNum;
		out << "(ifstream &in,ofstream &out){"<<char(10)<<char(9)
			<<"char c;"<<char(10)<<char(9)<<"in >> c;"<<char(10)<<char(9)<<"if(!in.eof()){"
			<<char(10)<<char(9)<<char(9)<<"switch(c){"<<char(10)<<char(9)<<char(9);
		for(i = dfa.begin(); i != dfa.end(); i++){
			if((*i).firstnode.nodeequal(*j)){
				if((*i).pathchar == '\n') out << "case\'\\n\':"<<char(10)<<char(9)<<char(9)<<char(9)
					<<"s += c;"<<char(10)<<char(9)<<char(9)<<char(9)<<"if(state";
				else out << "case\'"<<(*i).pathchar<<"\':"<<char(10)<<char(9)<<char(9)<<char(9)
					<<"s += c;"<<char(10)<<char(9)<<char(9)<<char(9)<<"if(state";
				out << (*i).secondnode.stateNum;
				out << "(in,out)) return true;"<<char(10)<<char(9)<<char(9)<<char(9)<<"break;"
					<<char(10)<<char(9)<<char(9);
			}
		}
		out <<"case\'04\':;"<<char(10)<<char(9)<<char(9)<<"}"<<char(10)<<char(9)<<"}"<<char(10)<<char(9);
		if((*j).nodeequal(dfa.headNode)){
			out << "if(s.compare(\"\") == 0){"<<char(10)<<char(9)<<char(9)
				<<"cout<<\"end of match\";"<<char(10)<<char(9)<<char(9)<<"return false;"
				<<char(10)<<char(9)<<"}"<<char(10)<<char(9)<<"else{"<<char(10)<<char(9)<<char(9);
			if(dfalistcontain(dfa.tailNode,*j)){
				out<<getstringbyindex(codelist,*((*j).names.begin()))<<char(10)<<char(9)<<char(9);
				out << "s = \"\";"<<char(10)<<char(9)<<char(9)<<"in.seekg(-1,ios::cur);"
					<<char(10)<<char(9)<<char(9)<<"return true;"<<char(10)<<char(9);
			}
			else out <<"s = s.substr(0,s.length()-1);"
				<<char(10)<<char(9)<<char(9)<<"in.seekg(-1,ios::cur);"<<char(10)<<char(9)<<char(9)<<"return false;"
				<<char(10)<<char(9);
			out<<"}\n";
		}
		else if(dfalistcontain(dfa.tailNode,*j)){
			out<<getstringbyindex(codelist,*((*j).names.begin()))<<char(10)<<char(9);
		    out << "s = \"\";"<<char(10)<<char(9)<<"in.seekg(-1,ios::cur);"
					<<char(10)<<char(9)<<"return true;\n";
		}
		else out <<"s = s.substr(0,s.length()-1);"
				<<char(10)<<char(9)<<"in.seekg(-1,ios::cur);"<<char(10)<<char(9)<<"return false;\n";
        out <<"}\n";
	}
	out <<"void seulex(){"<<char(10)<<char(9)<<"char n[50];"<<char(10)<<char(9)
		<<"cout<<\"input the source file:\"<<endl;"<<char(10)<<char(9)<<"cin>>n;"<<char(10)<<char(9);
	out <<"ifstream in(\"C:\\\\Users\\\\badga\\\\Desktop\\\\testLex.txt\");"<<char(10)<<char(9)<<"ofstream out(\"D:\\\\result.txt\", ios::out);"
		<<char(10)<<char(9)<<"if (!in.is_open())";
    out << "{"<<char(10)<<char(9)<<char(9)<<"cout << \"未成功打开文件\" << endl;"
		<<char(10)<<char(9)<<"}"<<char(10)<<char(9)<<"in >> noskipws;"<<char(10)<<char(9)<<"bool i = state";
	out <<dfa.headNode.stateNum<<"(in,out);"<<char(10)<<char(9)<<"while(i){";
	out <<"i = state"<<dfa.headNode.stateNum<<"(in,out);}\n}";
}

void fileanalysis(string s){
	char n[50];
	int name = 0;
	strcpy(n,s.c_str());
	ifstream myfile("C:\\Users\\badga\\Desktop\\lex.txt", ios::in);
    ofstream outfile("C:\\Users\\badga\\source\\repos\\SeuLex\\SeuLex\\out.cpp", ios::out); 
	if (!myfile.is_open()) 
    { 
        cout << "未成功打开文件" << endl; 
    }
	myfile >> noskipws;
	char temp;
	myfile >> temp;
	while(temp == ' '||temp == '\n') myfile >> temp;  //part1------------------------------------------------------------------
	if(temp == '%'){
		myfile >> temp;
		if(temp == '{'){
			myfile >> temp;
			while(temp != '%'){
				outfile << temp;
				myfile >> temp;
			}
			myfile >> temp;
			myfile >> temp;
			while(temp == ' '||temp == '\n') myfile >> temp;
			while(temp != '%'){
				string tit;
				tit += temp;
				myfile >> temp;
				while(temp != ' '){
					tit += temp;
					myfile >> temp;
				}
				cout << tit <<endl;
				title.push_back(tit);
				while(temp == ' ') myfile >> temp;
				string reg;
				reg += temp;
				myfile >> temp;
				while(temp != ' ' && temp != '\n'){
					reg += temp;
					myfile >> temp;
				}
				title.push_back(reg);
				while(temp == ' '||temp == '\n') myfile >> temp;
			}
			myfile >> temp;
		}
	}
	else{
		while(temp != '%'){
			string str;
			str += temp;
			myfile >> temp;
			while(temp != ' '){
				str += temp;
				myfile >> temp;
			}
			title.push_back(str);
			while(temp == ' ') myfile >> temp;
			string reg;
			reg += temp;
			myfile >> temp;
			while(temp != ' ' && temp != '\n'){
				reg += temp;
				myfile >> temp;
			}
			title.push_back(reg);
			while(temp == ' '||temp == '\n') myfile >> temp;
		}
		myfile >> temp;
		if(temp == '{'){
			myfile >> temp;
			while(temp != '%'){
				outfile << temp;
				myfile >> temp;
			}
			myfile >> temp;
			while(temp != '%') myfile >> temp;
			myfile >> temp;
		}
	}                                                      //part2-----------------------------------------------------------------------------------------------------------------
	if(temp == '%'){
		myfile >> temp;
		while(temp == ' '||temp == '\n') myfile >> temp;
		while(temp != '%'){
			string reg;
			reg += temp;
			myfile >> temp;
			while(temp != ' ' && temp != '\t'){
				reg += temp;
				myfile >> temp;
			}
			cout<<reg<<endl;
			NFA nfa = getFinalNFA(reg,name);
			titlenfa.push_back(nfa);
			char test = 'a';
			//printclosure(nfa.symbolmoves(nfa.Eclosure(nfa.headNode),test));
			//DFA dfa = nfa.transDFA();
			//dfa.minimize();
			//dfa.printDFA();
			//nfa.printNFA();
			cout<<"jh";
			name++;
			while(temp == ' ' || temp == '\t') myfile >> temp;
			string code;
			code += temp;
			myfile >> temp;
			while(temp != '\n'){
				if(myfile.eof()) {
					myfile.close(); 
					outfile.close();
					return;
				}
				else{
					code += temp;
					myfile >> temp;
				}
			}
			codelist.push_back(code);
			while(temp == ' '||temp == '\n'){
				myfile >> temp;
				if(myfile.eof()) {
					myfile.close(); 
					outfile.close();
					return;
				}
			}
		}
		NFANode genhead(generateStateNumber(),1);
		NFA genfa;
		genfa.addhead(genhead);
		list<NFA>::iterator i;
		for(i = titlenfa.begin();i != titlenfa.end();i++){
			genfa.addNFA(*i);
			NFAPath path1(genhead,(*i).headNode,nul);
			genfa.addpath(path1);
			genfa.addtail((*i).tailNode.front());
		}
		cout << "d"<<endl;
		//cout<<genfa.tailNode.size()<<endl;
		//genfa.printNFA();
		DFA dfa = genfa.transDFA();
		//cout << "f"<<endl;
		dfa.minimize();
		//cout << "g"<<endl;
		dfafileout(dfa,outfile);
		//cout << "h"<<endl;
		myfile >> temp;
		if(temp == '%'){
			myfile >> temp;
			while(!myfile.eof()){
				outfile << temp;
				myfile >> temp;
			}
		}
	}
	myfile.close(); 
    outfile.close();
}

int main1(){
	string file;
	cout<<"input the source file( D:\\"
		<<"\\test1.txt or D:\\"
		<<"\\test2.txt or D:\\"
		<<"\\test3.txt ):"<<endl;
	cin>>file;
	fileanalysis(file);
	return 0;
}





	
    

