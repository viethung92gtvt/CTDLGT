#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
LL mod=1e9+7;
map<int,LL> D;
LL zero(int n){
	if(D[n]) return D[n];
	if(n==0) return D[n]=1;//suy bien
	D[n]=0;
	for(int a=1;a*a<=n;a++){
		if(n%a==0) D[n]=(D[n]+zero((a-1)*(n/a+1)))%mod;
	}
	return D[n];
}
int main(){
	int t;
	cin>>t;
	int a[t+5];
	for(int i=1;i<=t;i++) cin>>a[i];
	for(int i=1;i<=t;i++) cout<<zero(a[i])<<endl;
}


