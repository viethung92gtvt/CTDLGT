#include <bits/stdc++.h>
using namespace std;
map<int,long long> D;
long long F(int n){
	if(D.find(n)!=D.end()) return D[n];
	if(n<=1) return D[n]=1;
	return D[n] = F(n-1) + F(n-2);
}
int main ()
{
  cout<<F(100);
  return 0;
}

