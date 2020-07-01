//http://laptrinhonline.club/problem/tichpxdaotu
#include <bits/stdc++.h>
using namespace std;
int main()
{
	string xau;
	int pos;
	stack<string> s;
	getline(cin,xau);
	string delimiter=" ";
	while(true){
	pos	=  xau.find(delimiter);
	if(pos>-1){
		string t = xau.substr(0,pos);
		s.push(t);
		xau.erase(0, pos + delimiter.length());
	}
	else{
		s.push(xau);
		break;
	}
	}
	while(!s.empty()){
		cout<<s.top();
		s.pop();
		if(!s.empty()) cout<<" ";
	}
	return 0;
}


