#include <bits/stdc++.h>
using namespace std;
struct graph{
	int n,m;//n la so dinh,m la so canh
	vector<int> A[10005]; //Danh sach dinh ke co huong
	void read(string fn){
		ifstream fin(fn);
		fin>>n>>m;
		for(int i=1;i<=m;i++){
			int u,v;
			fin>>u>>v;
			A[u].push_back(v);//do thi co huong
		}
		fin.close();
	}
	void write(){
		for(int i=1;i<=n;i++){
			cout<<"\n"<<i<<": ";
			for(auto t:A[i]) cout<<t<<" ";
		}
		int s,f;
		cout<<"Nhap vao diem xuat phat: ";cin>>s;
		cout<<"Nhap vao diem ket thuc: ";cin>>f;
		BFS(s,f);
	}
	void BFS(int s,int f){
		int d[10005]={};
		queue<int> Q;
		Q.push(s); d[s]=1;
		while(Q.size()){
			int u=Q.front();
			Q.pop();
			for(auto v:A[u]) if(!d[v]) {
				d[v]=d[u]+1;
				Q.push(v);
				if(v==f) {cout<<"Duong di ngan nhat tu "<<s<<"den "<<f<<" la: "<<d[v]-1;return;}
			}
		}
		cout<<"Khong co duong di tu "<<s<<"den "<<f;
	}
};
int main ()
{
  graph G;
  G.read("g.txt");
  G.write();
    return 0;
}

