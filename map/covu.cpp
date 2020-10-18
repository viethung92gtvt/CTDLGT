//https://laptrinhonline.club/problem/tichpxcv
//Cô? vu~
#include <bits/stdc++.h>
using namespace std;
int main ()
{
	string xau;
	cin>>xau;
	map<int,char> m;
	for(char x:xau){
		x=='X'?m['X']++:m['D']++;
	}
	cout<<2*min(m['X'],m['D']);
  return 0;
}

