#include<fstream>
           
#include<iostream>
#include<string>
using namespace std;
string s = "";
ofstream token;
bool state120(ifstream &in,ofstream &out);
bool state121(ifstream &in,ofstream &out);
bool state126(ifstream &in,ofstream &out);
bool state131(ifstream &in,ofstream &out);
bool state129(ifstream &in,ofstream &out);
bool state132(ifstream &in,ofstream &out);
bool state106(ifstream &in,ofstream &out);
bool state107(ifstream &in,ofstream &out);
bool state108(ifstream &in,ofstream &out);
bool state109(ifstream &in,ofstream &out);
bool state110(ifstream &in,ofstream &out);
bool state111(ifstream &in,ofstream &out);
bool state112(ifstream &in,ofstream &out);
bool state113(ifstream &in,ofstream &out);
bool state114(ifstream &in,ofstream &out);
bool state115(ifstream &in,ofstream &out);
bool state116(ifstream &in,ofstream &out);
bool state117(ifstream &in,ofstream &out);
bool state118(ifstream &in,ofstream &out);
bool state119(ifstream &in,ofstream &out);
bool state101(ifstream &in,ofstream &out);
bool state122(ifstream &in,ofstream &out);
bool state123(ifstream &in,ofstream &out);
bool state127(ifstream &in,ofstream &out);
bool state130(ifstream &in,ofstream &out);
bool state102(ifstream &in,ofstream &out);
bool state104(ifstream &in,ofstream &out);
bool state124(ifstream &in,ofstream &out);
bool state128(ifstream &in,ofstream &out);
bool state103(ifstream &in,ofstream &out);
bool state125(ifstream &in,ofstream &out);
bool state105(ifstream &in,ofstream &out);

bool state120(ifstream &in,ofstream &out){
	char c;
	in >> c;
	if(!in.eof()){
		switch(c){
		case'i':
			s += c;
			if(state121(in,out)) return true;
			break;
		case'f':
			s += c;
			if(state126(in,out)) return true;
			break;
		case'n':
			s += c;
			if(state131(in,out)) return true;
			break;
		case't':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'm':
			s += c;
			if(state129(in,out)) return true;
			break;
		case'a':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'o':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'r':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'w':
			s += c;
			if(state132(in,out)) return true;
			break;
		case'h':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'l':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'e':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'0':
			s += c;
			if(state106(in,out)) return true;
			break;
		case'1':
			s += c;
			if(state106(in,out)) return true;
			break;
		case'2':
			s += c;
			if(state106(in,out)) return true;
			break;
		case'3':
			s += c;
			if(state106(in,out)) return true;
			break;
		case'4':
			s += c;
			if(state106(in,out)) return true;
			break;
		case'5':
			s += c;
			if(state106(in,out)) return true;
			break;
		case'6':
			s += c;
			if(state106(in,out)) return true;
			break;
		case'7':
			s += c;
			if(state106(in,out)) return true;
			break;
		case'8':
			s += c;
			if(state106(in,out)) return true;
			break;
		case'9':
			s += c;
			if(state106(in,out)) return true;
			break;
		case'b':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'c':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'd':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'g':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'j':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'k':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'p':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'q':
			s += c;
			if(state131(in,out)) return true;
			break;
		case's':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'u':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'v':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'x':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'y':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'z':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'A':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'B':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'C':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'D':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'E':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'F':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'G':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'H':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'I':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'J':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'K':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'L':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'M':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'N':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'O':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'P':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'Q':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'R':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'S':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'T':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'U':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'V':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'W':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'X':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'Y':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'Z':
			s += c;
			if(state131(in,out)) return true;
			break;
		case' ':
			s += c;
			if(state107(in,out)) return true;
			break;
		case'\n':
			s += c;
			if(state108(in,out)) return true;
			break;
		case'{':
			s += c;
			if(state109(in,out)) return true;
			break;
		case'}':
			s += c;
			if(state110(in,out)) return true;
			break;
		case'(':
			s += c;
			if(state111(in,out)) return true;
			break;
		case')':
			s += c;
			if(state112(in,out)) return true;
			break;
		case',':
			s += c;
			if(state113(in,out)) return true;
			break;
		case';':
			s += c;
			if(state114(in,out)) return true;
			break;
		case'+':
			s += c;
			if(state115(in,out)) return true;
			break;
		case'-':
			s += c;
			if(state116(in,out)) return true;
			break;
		case'*':
			s += c;
			if(state117(in,out)) return true;
			break;
		case'/':
			s += c;
			if(state118(in,out)) return true;
			break;
		case'=':
			s += c;
			if(state119(in,out)) return true;
			break;
		case'04':;
		}
	}
	if(s.compare("") == 0){
		cout<<"end of match";
		return false;
	}
	else{
		s = s.substr(0,s.length()-1);
		in.seekg(-1,ios::cur);
		return false;
	}
}
bool state121(ifstream &in,ofstream &out){
	char c;
	in >> c;
	if(!in.eof()){
		switch(c){
		case'i':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'f':
			s += c;
			if(state101(in,out)) return true;
			break;
		case'n':
			s += c;
			if(state122(in,out)) return true;
			break;
		case't':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'm':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'a':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'o':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'r':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'w':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'h':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'l':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'e':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'b':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'c':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'd':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'g':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'j':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'k':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'p':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'q':
			s += c;
			if(state131(in,out)) return true;
			break;
		case's':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'u':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'v':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'x':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'y':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'z':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'A':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'B':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'C':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'D':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'E':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'F':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'G':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'H':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'I':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'J':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'K':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'L':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'M':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'N':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'O':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'P':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'Q':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'R':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'S':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'T':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'U':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'V':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'W':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'X':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'Y':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'Z':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'04':;
		}
	}
	{ cout<<"identifier  "<<s<<endl;  token << "IDENTIFIER" << endl; }
	s = "";
	in.seekg(-1,ios::cur);
	return true;
}
bool state126(ifstream &in,ofstream &out){
	char c;
	in >> c;
	if(!in.eof()){
		switch(c){
		case'i':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'f':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'n':
			s += c;
			if(state131(in,out)) return true;
			break;
		case't':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'm':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'a':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'o':
			s += c;
			if(state123(in,out)) return true;
			break;
		case'r':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'w':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'h':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'l':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'e':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'b':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'c':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'd':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'g':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'j':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'k':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'p':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'q':
			s += c;
			if(state131(in,out)) return true;
			break;
		case's':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'u':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'v':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'x':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'y':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'z':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'A':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'B':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'C':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'D':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'E':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'F':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'G':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'H':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'I':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'J':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'K':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'L':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'M':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'N':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'O':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'P':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'Q':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'R':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'S':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'T':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'U':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'V':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'W':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'X':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'Y':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'Z':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'04':;
		}
	}
	{ cout<<"identifier  "<<s<<endl;  token << "IDENTIFIER" << endl; }
	s = "";
	in.seekg(-1,ios::cur);
	return true;
}
bool state131(ifstream &in,ofstream &out){
	char c;
	in >> c;
	if(!in.eof()){
		switch(c){
		case'i':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'f':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'n':
			s += c;
			if(state131(in,out)) return true;
			break;
		case't':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'm':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'a':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'o':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'r':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'w':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'h':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'l':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'e':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'b':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'c':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'd':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'g':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'j':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'k':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'p':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'q':
			s += c;
			if(state131(in,out)) return true;
			break;
		case's':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'u':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'v':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'x':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'y':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'z':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'A':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'B':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'C':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'D':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'E':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'F':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'G':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'H':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'I':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'J':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'K':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'L':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'M':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'N':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'O':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'P':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'Q':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'R':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'S':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'T':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'U':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'V':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'W':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'X':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'Y':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'Z':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'04':;
		}
	}
	{ cout<<"identifier  "<<s<<endl;  token << "IDENTIFIER" << endl; }
	s = "";
	in.seekg(-1,ios::cur);
	return true;
}
bool state129(ifstream &in,ofstream &out){
	char c;
	in >> c;
	if(!in.eof()){
		switch(c){
		case'i':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'f':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'n':
			s += c;
			if(state131(in,out)) return true;
			break;
		case't':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'm':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'a':
			s += c;
			if(state127(in,out)) return true;
			break;
		case'o':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'r':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'w':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'h':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'l':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'e':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'b':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'c':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'd':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'g':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'j':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'k':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'p':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'q':
			s += c;
			if(state131(in,out)) return true;
			break;
		case's':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'u':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'v':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'x':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'y':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'z':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'A':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'B':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'C':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'D':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'E':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'F':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'G':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'H':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'I':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'J':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'K':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'L':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'M':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'N':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'O':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'P':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'Q':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'R':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'S':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'T':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'U':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'V':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'W':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'X':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'Y':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'Z':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'04':;
		}
	}
	{ cout<<"identifier  "<<s<<endl;  token << "IDENTIFIER" << endl; }
	s = "";
	in.seekg(-1,ios::cur);
	return true;
}
bool state132(ifstream &in,ofstream &out){
	char c;
	in >> c;
	if(!in.eof()){
		switch(c){
		case'i':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'f':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'n':
			s += c;
			if(state131(in,out)) return true;
			break;
		case't':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'm':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'a':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'o':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'r':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'w':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'h':
			s += c;
			if(state130(in,out)) return true;
			break;
		case'l':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'e':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'b':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'c':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'd':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'g':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'j':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'k':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'p':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'q':
			s += c;
			if(state131(in,out)) return true;
			break;
		case's':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'u':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'v':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'x':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'y':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'z':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'A':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'B':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'C':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'D':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'E':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'F':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'G':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'H':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'I':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'J':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'K':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'L':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'M':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'N':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'O':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'P':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'Q':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'R':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'S':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'T':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'U':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'V':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'W':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'X':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'Y':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'Z':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'04':;
		}
	}
	{ cout<<"identifier  "<<s<<endl;  token << "IDENTIFIER" << endl; }
	s = "";
	in.seekg(-1,ios::cur);
	return true;
}
bool state106(ifstream &in,ofstream &out){
	char c;
	in >> c;
	if(!in.eof()){
		switch(c){
		case'0':
			s += c;
			if(state106(in,out)) return true;
			break;
		case'1':
			s += c;
			if(state106(in,out)) return true;
			break;
		case'2':
			s += c;
			if(state106(in,out)) return true;
			break;
		case'3':
			s += c;
			if(state106(in,out)) return true;
			break;
		case'4':
			s += c;
			if(state106(in,out)) return true;
			break;
		case'5':
			s += c;
			if(state106(in,out)) return true;
			break;
		case'6':
			s += c;
			if(state106(in,out)) return true;
			break;
		case'7':
			s += c;
			if(state106(in,out)) return true;
			break;
		case'8':
			s += c;
			if(state106(in,out)) return true;
			break;
		case'9':
			s += c;
			if(state106(in,out)) return true;
			break;
		case'04':;
		}
	}
	{ cout<<"integer  "<<s<<endl;  token << "NUMBER" << endl;}
	s = "";
	in.seekg(-1,ios::cur);
	return true;
}
bool state107(ifstream &in,ofstream &out){
	char c;
	in >> c;
	if(!in.eof()){
		switch(c){
		case'04':;
		}
	}
	{cout<<"space  "<<endl;}
	s = "";
	in.seekg(-1,ios::cur);
	return true;
}
bool state108(ifstream &in,ofstream &out){
	char c;
	in >> c;
	if(!in.eof()){
		switch(c){
		case'04':;
		}
	}
	{cout<<"enter  "<<endl;}
	s = "";
	in.seekg(-1,ios::cur);
	return true;
}
bool state109(ifstream &in,ofstream &out){
	char c;
	in >> c;
	if(!in.eof()){
		switch(c){
		case'04':;
		}
	}
	{ cout<<"boundary  "<<s<<endl;   token << "'{'" << endl;}
	s = "";
	in.seekg(-1,ios::cur);
	return true;
}
bool state110(ifstream &in,ofstream &out){
	char c;
	in >> c;
	if(!in.eof()){
		switch(c){
		case'04':;
		}
	}
	{ cout<<"boundary  "<<s<<endl;   token << "'}'" << endl;}
	s = "";
	in.seekg(-1,ios::cur);
	return true;
}
bool state111(ifstream &in,ofstream &out){
	char c;
	in >> c;
	if(!in.eof()){
		switch(c){
		case'04':;
		}
	}
	{ cout<<"boundary  "<<s<<endl;   token << "'('" << endl;}
	s = "";
	in.seekg(-1,ios::cur);
	return true;
}
bool state112(ifstream &in,ofstream &out){
	char c;
	in >> c;
	if(!in.eof()){
		switch(c){
		case'04':;
		}
	}
	{ cout<<"boundary  "<<s<<endl;   token << "')'" << endl;}
	s = "";
	in.seekg(-1,ios::cur);
	return true;
}
bool state113(ifstream &in,ofstream &out){
	char c;
	in >> c;
	if(!in.eof()){
		switch(c){
		case'04':;
		}
	}
	{ cout<<"boundary  "<<s<<endl;   token << "','" << endl;}
	s = "";
	in.seekg(-1,ios::cur);
	return true;
}
bool state114(ifstream &in,ofstream &out){
	char c;
	in >> c;
	if(!in.eof()){
		switch(c){
		case'04':;
		}
	}
	{ cout<<"boundary  "<<s<<endl;   token << "';'" << endl;}
	s = "";
	in.seekg(-1,ios::cur);
	return true;
}
bool state115(ifstream &in,ofstream &out){
	char c;
	in >> c;
	if(!in.eof()){
		switch(c){
		case'04':;
		}
	}
	{ cout<<"operator  "<<s<<endl;   token << "'+'" << endl;}
	s = "";
	in.seekg(-1,ios::cur);
	return true;
}
bool state116(ifstream &in,ofstream &out){
	char c;
	in >> c;
	if(!in.eof()){
		switch(c){
		case'04':;
		}
	}
	{ cout<<"operator  "<<s<<endl;   token << "'-'" << endl;}
	s = "";
	in.seekg(-1,ios::cur);
	return true;
}
bool state117(ifstream &in,ofstream &out){
	char c;
	in >> c;
	if(!in.eof()){
		switch(c){
		case'04':;
		}
	}
	{ cout<<"operator  "<<s<<endl;   token << "'*'" << endl;}
	s = "";
	in.seekg(-1,ios::cur);
	return true;
}
bool state118(ifstream &in,ofstream &out){
	char c;
	in >> c;
	if(!in.eof()){
		switch(c){
		case'04':;
		}
	}
	{ cout<<"operator  "<<s<<endl;   token << "'/'" << endl;}
	s = "";
	in.seekg(-1,ios::cur);
	return true;
}
bool state119(ifstream &in,ofstream &out){
	char c;
	in >> c;
	if(!in.eof()){
		switch(c){
		case'04':;
		}
	}
	{ cout<<"operator  "<<s<<endl;   token << "'='" << endl;}
	s = "";
	in.seekg(-1,ios::cur);
	return true;
}
bool state101(ifstream &in,ofstream &out){
	char c;
	in >> c;
	if(!in.eof()){
		switch(c){
		case'i':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'f':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'n':
			s += c;
			if(state131(in,out)) return true;
			break;
		case't':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'm':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'a':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'o':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'r':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'w':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'h':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'l':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'e':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'b':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'c':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'd':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'g':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'j':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'k':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'p':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'q':
			s += c;
			if(state131(in,out)) return true;
			break;
		case's':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'u':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'v':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'x':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'y':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'z':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'A':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'B':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'C':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'D':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'E':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'F':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'G':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'H':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'I':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'J':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'K':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'L':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'M':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'N':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'O':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'P':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'Q':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'R':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'S':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'T':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'U':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'V':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'W':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'X':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'Y':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'Z':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'04':;
		}
	}
	{cout<<"if关键字"<<s<<endl; token << "IF" << endl;}
	s = "";
	in.seekg(-1,ios::cur);
	return true;
}
bool state122(ifstream &in,ofstream &out){
	char c;
	in >> c;
	if(!in.eof()){
		switch(c){
		case'i':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'f':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'n':
			s += c;
			if(state131(in,out)) return true;
			break;
		case't':
			s += c;
			if(state102(in,out)) return true;
			break;
		case'm':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'a':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'o':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'r':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'w':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'h':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'l':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'e':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'b':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'c':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'd':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'g':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'j':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'k':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'p':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'q':
			s += c;
			if(state131(in,out)) return true;
			break;
		case's':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'u':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'v':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'x':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'y':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'z':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'A':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'B':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'C':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'D':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'E':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'F':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'G':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'H':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'I':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'J':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'K':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'L':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'M':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'N':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'O':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'P':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'Q':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'R':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'S':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'T':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'U':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'V':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'W':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'X':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'Y':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'Z':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'04':;
		}
	}
	{ cout<<"identifier  "<<s<<endl;  token << "IDENTIFIER" << endl; }
	s = "";
	in.seekg(-1,ios::cur);
	return true;
}
bool state123(ifstream &in,ofstream &out){
	char c;
	in >> c;
	if(!in.eof()){
		switch(c){
		case'i':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'f':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'n':
			s += c;
			if(state131(in,out)) return true;
			break;
		case't':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'm':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'a':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'o':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'r':
			s += c;
			if(state104(in,out)) return true;
			break;
		case'w':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'h':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'l':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'e':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'b':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'c':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'd':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'g':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'j':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'k':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'p':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'q':
			s += c;
			if(state131(in,out)) return true;
			break;
		case's':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'u':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'v':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'x':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'y':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'z':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'A':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'B':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'C':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'D':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'E':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'F':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'G':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'H':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'I':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'J':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'K':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'L':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'M':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'N':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'O':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'P':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'Q':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'R':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'S':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'T':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'U':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'V':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'W':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'X':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'Y':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'Z':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'04':;
		}
	}
	{ cout<<"identifier  "<<s<<endl;  token << "IDENTIFIER" << endl; }
	s = "";
	in.seekg(-1,ios::cur);
	return true;
}
bool state127(ifstream &in,ofstream &out){
	char c;
	in >> c;
	if(!in.eof()){
		switch(c){
		case'i':
			s += c;
			if(state124(in,out)) return true;
			break;
		case'f':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'n':
			s += c;
			if(state131(in,out)) return true;
			break;
		case't':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'm':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'a':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'o':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'r':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'w':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'h':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'l':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'e':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'b':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'c':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'd':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'g':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'j':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'k':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'p':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'q':
			s += c;
			if(state131(in,out)) return true;
			break;
		case's':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'u':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'v':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'x':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'y':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'z':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'A':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'B':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'C':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'D':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'E':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'F':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'G':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'H':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'I':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'J':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'K':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'L':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'M':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'N':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'O':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'P':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'Q':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'R':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'S':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'T':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'U':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'V':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'W':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'X':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'Y':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'Z':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'04':;
		}
	}
	{ cout<<"identifier  "<<s<<endl;  token << "IDENTIFIER" << endl; }
	s = "";
	in.seekg(-1,ios::cur);
	return true;
}
bool state130(ifstream &in,ofstream &out){
	char c;
	in >> c;
	if(!in.eof()){
		switch(c){
		case'i':
			s += c;
			if(state128(in,out)) return true;
			break;
		case'f':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'n':
			s += c;
			if(state131(in,out)) return true;
			break;
		case't':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'm':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'a':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'o':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'r':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'w':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'h':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'l':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'e':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'b':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'c':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'd':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'g':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'j':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'k':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'p':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'q':
			s += c;
			if(state131(in,out)) return true;
			break;
		case's':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'u':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'v':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'x':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'y':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'z':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'A':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'B':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'C':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'D':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'E':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'F':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'G':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'H':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'I':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'J':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'K':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'L':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'M':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'N':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'O':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'P':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'Q':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'R':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'S':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'T':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'U':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'V':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'W':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'X':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'Y':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'Z':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'04':;
		}
	}
	{ cout<<"identifier  "<<s<<endl;  token << "IDENTIFIER" << endl; }
	s = "";
	in.seekg(-1,ios::cur);
	return true;
}
bool state102(ifstream &in,ofstream &out){
	char c;
	in >> c;
	if(!in.eof()){
		switch(c){
		case'i':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'f':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'n':
			s += c;
			if(state131(in,out)) return true;
			break;
		case't':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'm':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'a':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'o':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'r':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'w':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'h':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'l':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'e':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'b':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'c':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'd':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'g':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'j':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'k':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'p':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'q':
			s += c;
			if(state131(in,out)) return true;
			break;
		case's':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'u':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'v':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'x':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'y':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'z':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'A':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'B':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'C':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'D':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'E':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'F':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'G':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'H':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'I':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'J':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'K':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'L':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'M':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'N':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'O':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'P':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'Q':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'R':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'S':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'T':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'U':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'V':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'W':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'X':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'Y':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'Z':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'04':;
		}
	}
	{cout<<"int关键字"<<s<<endl; token << "INT" << endl;}
	s = "";
	in.seekg(-1,ios::cur);
	return true;
}
bool state104(ifstream &in,ofstream &out){
	char c;
	in >> c;
	if(!in.eof()){
		switch(c){
		case'i':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'f':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'n':
			s += c;
			if(state131(in,out)) return true;
			break;
		case't':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'm':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'a':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'o':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'r':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'w':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'h':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'l':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'e':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'b':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'c':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'd':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'g':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'j':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'k':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'p':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'q':
			s += c;
			if(state131(in,out)) return true;
			break;
		case's':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'u':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'v':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'x':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'y':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'z':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'A':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'B':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'C':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'D':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'E':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'F':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'G':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'H':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'I':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'J':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'K':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'L':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'M':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'N':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'O':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'P':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'Q':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'R':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'S':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'T':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'U':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'V':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'W':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'X':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'Y':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'Z':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'04':;
		}
	}
	{cout<<"for关键字  "<<s<<endl; token << "FOR" << endl;}
	s = "";
	in.seekg(-1,ios::cur);
	return true;
}
bool state124(ifstream &in,ofstream &out){
	char c;
	in >> c;
	if(!in.eof()){
		switch(c){
		case'i':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'f':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'n':
			s += c;
			if(state103(in,out)) return true;
			break;
		case't':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'm':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'a':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'o':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'r':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'w':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'h':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'l':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'e':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'b':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'c':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'd':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'g':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'j':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'k':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'p':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'q':
			s += c;
			if(state131(in,out)) return true;
			break;
		case's':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'u':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'v':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'x':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'y':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'z':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'A':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'B':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'C':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'D':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'E':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'F':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'G':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'H':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'I':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'J':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'K':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'L':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'M':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'N':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'O':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'P':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'Q':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'R':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'S':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'T':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'U':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'V':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'W':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'X':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'Y':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'Z':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'04':;
		}
	}
	{ cout<<"identifier  "<<s<<endl;  token << "IDENTIFIER" << endl; }
	s = "";
	in.seekg(-1,ios::cur);
	return true;
}
bool state128(ifstream &in,ofstream &out){
	char c;
	in >> c;
	if(!in.eof()){
		switch(c){
		case'i':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'f':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'n':
			s += c;
			if(state131(in,out)) return true;
			break;
		case't':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'm':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'a':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'o':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'r':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'w':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'h':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'l':
			s += c;
			if(state125(in,out)) return true;
			break;
		case'e':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'b':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'c':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'd':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'g':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'j':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'k':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'p':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'q':
			s += c;
			if(state131(in,out)) return true;
			break;
		case's':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'u':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'v':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'x':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'y':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'z':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'A':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'B':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'C':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'D':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'E':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'F':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'G':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'H':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'I':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'J':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'K':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'L':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'M':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'N':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'O':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'P':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'Q':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'R':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'S':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'T':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'U':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'V':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'W':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'X':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'Y':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'Z':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'04':;
		}
	}
	{ cout<<"identifier  "<<s<<endl;  token << "IDENTIFIER" << endl; }
	s = "";
	in.seekg(-1,ios::cur);
	return true;
}
bool state103(ifstream &in,ofstream &out){
	char c;
	in >> c;
	if(!in.eof()){
		switch(c){
		case'i':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'f':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'n':
			s += c;
			if(state131(in,out)) return true;
			break;
		case't':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'm':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'a':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'o':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'r':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'w':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'h':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'l':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'e':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'b':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'c':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'd':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'g':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'j':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'k':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'p':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'q':
			s += c;
			if(state131(in,out)) return true;
			break;
		case's':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'u':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'v':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'x':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'y':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'z':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'A':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'B':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'C':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'D':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'E':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'F':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'G':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'H':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'I':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'J':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'K':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'L':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'M':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'N':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'O':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'P':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'Q':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'R':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'S':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'T':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'U':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'V':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'W':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'X':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'Y':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'Z':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'04':;
		}
	}
	{cout<<"main关键字  "<<s<<endl; token << "IDENTIFIER" << endl;}
	s = "";
	in.seekg(-1,ios::cur);
	return true;
}
bool state125(ifstream &in,ofstream &out){
	char c;
	in >> c;
	if(!in.eof()){
		switch(c){
		case'i':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'f':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'n':
			s += c;
			if(state131(in,out)) return true;
			break;
		case't':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'm':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'a':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'o':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'r':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'w':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'h':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'l':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'e':
			s += c;
			if(state105(in,out)) return true;
			break;
		case'b':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'c':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'd':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'g':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'j':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'k':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'p':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'q':
			s += c;
			if(state131(in,out)) return true;
			break;
		case's':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'u':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'v':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'x':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'y':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'z':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'A':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'B':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'C':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'D':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'E':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'F':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'G':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'H':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'I':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'J':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'K':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'L':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'M':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'N':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'O':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'P':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'Q':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'R':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'S':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'T':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'U':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'V':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'W':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'X':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'Y':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'Z':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'04':;
		}
	}
	{ cout<<"identifier  "<<s<<endl;  token << "IDENTIFIER" << endl; }
	s = "";
	in.seekg(-1,ios::cur);
	return true;
}
bool state105(ifstream &in,ofstream &out){
	char c;
	in >> c;
	if(!in.eof()){
		switch(c){
		case'i':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'f':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'n':
			s += c;
			if(state131(in,out)) return true;
			break;
		case't':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'm':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'a':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'o':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'r':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'w':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'h':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'l':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'e':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'b':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'c':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'd':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'g':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'j':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'k':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'p':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'q':
			s += c;
			if(state131(in,out)) return true;
			break;
		case's':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'u':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'v':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'x':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'y':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'z':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'A':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'B':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'C':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'D':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'E':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'F':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'G':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'H':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'I':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'J':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'K':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'L':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'M':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'N':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'O':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'P':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'Q':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'R':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'S':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'T':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'U':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'V':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'W':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'X':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'Y':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'Z':
			s += c;
			if(state131(in,out)) return true;
			break;
		case'04':;
		}
	}
	{cout<<"while关键字  "<<s<<endl; token << "WHILE" << endl;}
	s = "";
	in.seekg(-1,ios::cur);
	return true;
}
void seulex(){
	char n[50];
	cout<<"input the source file:"<<endl;
	cin>>n;
	ifstream in("C:\\Users\\badga\\Desktop\\testLex.txt");
	ofstream out("D:\\result.txt", ios::out);
	if (!in.is_open()){
		cout << "未成功打开文件" << endl;
	}
	in >> noskipws;
	bool i = state120(in,out);
	while(i){i = state120(in,out);}
}
int main(void)   {
      token.open("tokens.txt",ios::out);
      seulex();
      
      return 0;
}