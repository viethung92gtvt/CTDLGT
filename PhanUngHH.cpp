#include<bits/stdc++.h>
using namespace std;
vector<int> A[55];
int d[55];
int dfs(int x)
{
	if(d[x]) return 0;
	d[x]=1; 
	int s=1;
	for(auto t:A[x]) s+=dfs(t);
	return s;
}
int main()
{
	int n,m,u,v;
	cin>>n>>m;
	for(int i=1;i<=m;i++) {cin>>u>>v; A[u].push_back(v); A[v].push_back(u);}
	long long res=1;
	for(int i=1;i<=n;i++) if(d[i]==0) res*=1LL<<(dfs(i)-1);
	cout<<res;
}
