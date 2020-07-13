#include <bits/stdc++.h>
using namespace std;
int D[10005]={0};
void zero(int n){
	if(D[n]) {
		return;
	}
	D[n]=1;
	int i;
	for(i=1;i*i<=n;i++){
		if(n%i==0){
			zero((i-1)*(n/i+1));
		}
	}
}
int main ()
{
  int n;
  cin>>n;
zero(n);
for(int i=0;i<=n;i++) if(D[i]==1) cout<<i<<" ";
  return 0;
}

