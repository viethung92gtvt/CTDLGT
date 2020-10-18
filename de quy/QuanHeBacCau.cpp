//Quan he bac cau. Cho n nguoi, m quan he
#include <bits/stdc++.h>
using namespace std;
struct QH{
	int n,m;
	vector<int> A[1000];
	bool d[1000]={};//Mang danh dau
	void read(string fn="quanhe.txt"){
		ifstream fin(fn);
		fin>>n>>m;
		for(int i=1;i<=m;i++){
			int u,v;
			fin>>u>>v;
			A[u].push_back(v);
			A[v].push_back(u);
		}
		fin.close();
	}
	void write(){
		for(int i=1;i<=n;i++){
			cout<<"\n"<<i<<" : ";
			for(auto x:A[i]) cout<<x<<"\t";
		}
	}
	bool DFS(int s,int f){
	if(s==f) return 1;
	d[s]=1;
	for(int x:A[s]) if(d[x]==0) if(DFS(x,f)) return 1;
	return 0;
	}
void sol(){
	int s,f;
	cout<<"\ns = ";cin>>s;
	cout<<"\nf = ";cin>>f;
	fill(d,d+n+1,0);
	d[s]=1;
	if(DFS(s,f)) cout<<"Di duoc";
	else cout<<"Khong di duoc";
	}
};

int main ()
{
  QH R;
  R.read();
  R.write();
  R.sol();
  return 0;
}

