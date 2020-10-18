#include <bits/stdc++.h>
using namespace std;
bool ktnt(long long n){
//	if(n<2) return 0;
//	for(int i=2;i*i<=n;i++) if(n%i==0) return 0;
//	return 1;
//Cai tien
	if(n==2) return 1;
	if(n<2||n%2==0) return 0;
	for(int i=3;i*i<=n;i+=2) if(n%i==0) return 0;
	return 1;
}
int main ()
{
  cout<<ktnt(997 );
  return 0;
}

