#include<bits/stdc++.h>
using namespace std;
struct nhomban
{
	int n,m;//n sv va m quan he
	vector<int> A[100005];//The hien quan he cua cac SV
	int d[100005]={};//Mang danh dau sv i da duoc xep vao khu vuc nao do. d[i]=1 la da duoc xep vao khu vuc, d[i]=0 la chua xep khu vuc
	int dfs(int x)//Duyet theo chieu sau de tra ve so nguoi cua khu vuc chua sv x
	{
		if(d[x]) return 0;//Neu sv x d[x]=1 co nghia la da duoc xep vao 1 khu vuc thi tra ve 0, de khong cong them vao khu vuc khac
		d[x]=1;//nguoc lai thi gan sv x vao 1 khu vuc va danh dau d[x]=1
		int s=0;//dem so nguoi trong 1 khu vuc
		for(auto z:A[x]) s+=dfs(z);//Duyet tat ca cac sv co quan he voi sinh vien voi sv x de cong don vao 1 khu vuc
		return s+1;//Tra ve so nguoi cua khu vuc chua sv x
	}
	void sol()//Ham xu ly
	{
		cin>>n>>m;
		for(int i=1;i<=m;i++)
		{
			int u,v;
			cin>>u>>v; A[u].push_back(v);A[v].push_back(u);//u co quan he voi v nen v cung co quan he voi u
		}
		int res=0,g=0;//res la bien luu so sv lon nhat cua khu vuc; g la so khu vuc
		for(int i=1;i<=n;i++)
		if(d[i]==0)//neu sv i chua dc xep vao khu vuc nao thi thuc hien tim tat ca cac sv co quan he voi i
		{
			g++;//tang so luong khu vuc len 1
			int k=dfs(i);//k de luu ket qua so sv cua khu vuc g khi tim kiem dfs tat ca cac sv co quan he voi i
			if(res<k)res=k;
		}
		cout<<g<<"\n"<<res;
	}
 
};
 
int main()
{
	nhomban G; G.sol();
}
