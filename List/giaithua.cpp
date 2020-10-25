#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int n,dem0=0;
	list<int> L(1,1);
	cin>>n;
	while(n>1){
		int mem=0;
		for(auto it=L.rbegin();it!=L.rend();it++){
			mem+=*it*n;
			*it=mem%10;
			mem/=10;
		}
		while(mem!=0) L.push_front(mem%10),mem/=10;
		while(L.back()==0) {
			dem0++;
			L.pop_back();
		}
		n--;
	}
	for(auto x:L) cout<<x;
	cout<<string(dem0,'0');
  return 0;
  
}

