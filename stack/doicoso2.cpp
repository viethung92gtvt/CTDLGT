#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int n;cin>>n;
	stack<int> S;
	while(n){S.push(n%2);n/=2;}
	while(S.size()) {cout<<S.top(); S.pop();}
  
  return 0;
}

