#include <bits/stdc++.h>
using namespace std;
map<pair<int,int>, unsigned long long> Dic; 
unsigned long long C(int k,int n){
	if(Dic.find({k,n})!=Dic.end()) return Dic[{k,n}];
	if(k==0||k==n) return Dic[{k,n}]=1;
	return Dic[{k,n}]=C(k-1,n-1)+C(k,n-1);
	
	}
int main ()
{
	int n=20;
	for(int i=0;i<=n;i++)
  cout<<C(i,n)<<" ";
  return 0;
}

