#include <bits/stdc++.h>
using namespace std;
map <pair<int,int>,int> phanung;
long long nguyhiem=1;
int main(){
	int m,n,a,b,i;
	cin>>n;
	cin>>m;
	for(i=1;i<=m;i++) {
		cin>>a>>b;
		phanung[{a,b}]=1;
		phanung[{b,a}]=1;
	}
	for(i =1; i<=n;i++){
		for(int j=1;j<i;j++){
			if(phanung[{i,j}]==1||phanung[{j,i}]==1) {
				nguyhiem*=2;
				//break;	
			}
		}
	}
	cout<<nguyhiem;
}
