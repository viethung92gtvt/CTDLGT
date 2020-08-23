#include <bits/stdc++.h>
using namespace std;
map<int,bool> D;//DS nhung so di duoc
void DFS(int n){//Duyet Depth first search
	if(D[n]) return;
	D[n]=true;
	for(int a=1;a*a<=n;a++){
		if(n%a==0) DFS((a-1)*(n/a+1));
	}
}
int main(){
	int n;
	cin>>n;
	DFS(n);
	for(auto x:D) cout<<x.first<<" ";
}


