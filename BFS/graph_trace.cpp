#include <bits/stdc++.h>
#include "arrayqueue.cpp"
#include "nodequeue.cpp"
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
	void induong(int s,int f,int p[]){
		if(s==f)cout<<s;
		else{
			induong(s,p[f],p);
			cout<<"->"<<f;
		}
	}
	void induong_stack(int s,int f,int p[]){
		stack<int> S;
		while(f!=0) {
			S.push(f);
			f=p[f];
		}
		while(S.size()!=1){
			cout<<S.top()<<"->";
			S.pop();
		}
		cout<<S.top();
		S.pop();
	}
	void BFS(int s,int f){
		int d[10005]={},parent[10005];
		QUEUE<int> Q;
		Q.push(s); d[s]=1;
		while(Q.size()){
			int u=Q.front();
			Q.pop();
			for(auto v:A[u]) if(!d[v]) {
				d[v]=d[u]+1;
				Q.push(v);
				parent[v]=u;
				if(v==f) {
				cout<<"Duong di ngan nhat tu "<<s<<"den "<<f<<" la: "<<d[v]-1<<": ";
				induong_stack(s,f,parent);
				return;
				}
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

/*8 13
1 2
1 4
2 5
4 5
3 1
3 5
2 4
8 7
6 7
8 3
7 4
5 6
3 2*/
