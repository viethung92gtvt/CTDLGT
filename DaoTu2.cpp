//http://laptrinhonline.club/problem/tichpxdaotu
#include <bits/stdc++.h>
using namespace std;
int main()
{
	string xau;
	getline(cin,xau);
	char x[10005][10000]; int i=0;
	string t;
	stringstream  f(xau);
	while(getline(f, t, ' '))
   {
      strcpy(x[i++],t.c_str());
	}
//	for(--i;i>=0;i--) cout<<x[i];
	return 0;
}
