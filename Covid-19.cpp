//Liet ke cac F co the nhiem covid-19
//co n nguoi trong vong 14 ngay thi co m quan he tiep xuc giua 2 nguoi
//Cho danh sach cac nguoi F0 tim tat ca cac F co the
#include <bits/stdc++.h>
using namespace std;
struct covid{
	int n,m;//n la so nguoi, m la so quan he
	map<int,bool> F;
	vector<int> A[1001];//n max =1000, A la mang cac vector the hien quan he
	//A[i] gom nhung nguoi co tiep xuc voi nguoi i
	void DFS(int x){
		if(F[x]) return;
		F[x]=true;
		for(int z:A[x]) DFS(z);
	}
	void sol(){
		ifstream fin("covid.txt");
		fin>>n>>m;
		for(int i=1;i<=m;i++){
			int u,v;
			fin>>u>>v;
			A[u].push_back(v);
			A[v].push_back(u);
		}
		
		int k;
		fin>>k;
		for(int i=1;i<=k;i++){
			int x;
			fin>>x;DFS(x);
		}
		fin.close();
		for(auto z:F) cout<<z.first<<" ";
	}
};
int main ()
{
  covid C; C.sol();
  return 0;
}

