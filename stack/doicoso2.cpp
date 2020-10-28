#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int n;cin>>n;
	stack<int> S;
	while(n){S.push(n%2);
	n/=2;//n>>1;Dich bit sang trai 1 bit. Khi chia cho 10 thi bo di chu so cuoi cung.
	}
	while(S.size()) {cout<<S.top(); S.pop();}
  
  return 0;
}

