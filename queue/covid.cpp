//Thong ke covid
#include <bits/stdc++.h>
using namespace std;
struct covid{
	int n,m,d[100005]={};
	queue<int> Q;
	vector<int> A[1000];//quan he
	void read(){
		freopen("cv.txt","r",stdin);
		cin>>n>>m;
		for(int i=1;i<=m;i++){
			int u,v;
			cin>>u>>v;
			A[u].push_back(v);
			A[v].push_back(u);
		}
		int k;
		cin>>k;
		for(int i=1;i<=k;i++){
			int x;
			cin>>x;
			Q.push(x);
			d[x]=1;
		}
	}
	void BFS(){
		int g=0;
		while(Q.size()){
			int u=Q.front();
			for(int v:A[u]) if(d[v]==0){
				d[v]=d[u]+1;
				if(d[v]!=g) {
				cout<<"F"<<g<<": "<<Q.size()<<endl; g++;
				}
				Q.push(v);
			}
			Q.pop();
		}
		//cout<<g;
	}
};
int main ()
{
	covid  C; C.read(); C.BFS();
  return 0;
}

