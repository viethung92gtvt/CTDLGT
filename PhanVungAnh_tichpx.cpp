#include<bits/stdc++.h>
using namespace std;
struct anh
{
	int a[105][105],n,m;//ma tran anh n hang m cot
	int h[8]={ 1,-1, 1,-1, 1,-1, 0, 0};//vi tri cac toa do lang gieng 8 theo hang
	int c[8]={ 0, 0, 1, 1,-1,-1, 1,-1};//vi tri cac toa do lang gieng 8 theo cot
	vector<int>res;//Vector luu ket qua so luong o trang (so 0) cua 1 vung
	int dfs(int x,int y)//Ham tim kieu theo chieu sau dem so ô trang o vi tri [x][y] 
	{
		a[x][y]=1;//Gan o trang (0) ve thanh den (1)
		int dem=1;//Dem = 1
		for(int t=0;t<8;t++) //Duyet cac vi tri lang gieng voi [x][y]
			if(!a[x+h[t]][y+c[t]])//Neu la o trang 
			 dem+=dfs(x+h[t],y+c[t]);//Dem duoc cong them voi goi de quy dfs vi tri lang gieng voi [x][y]
		return dem;
	}
	void sol()
	{
		scanf("%d%d",&n,&m);
		for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++) scanf("%d",&a[i][j]);
		
		for(int i=0;i<=n+1;i++) a[i][0]=a[i][m+1]=1;//Gan tat cac vien doc cua anh ve 1
		for(int j=0;j<=m+1;j++) a[0][j]=a[n+1][j]=1;//Gan tat cac vien ngang cua anh ve 1
		for(int i=1;i<=n;i++)
			for(int j=1;j<=m;j++)
		 		if(!a[i][j]) //Neu tim thay o trang
		 		{
		 			int dem=dfs(i,j);//Dem so o trang cua vung chua ô o vi tri [i][j]
		 			res.push_back(dem);//Luu vao vector res
				}
		 			
		sort(res.begin(),res.end());//Sx tang dan vector res
		printf("%d\n",res.size());//so luong phan tu trong res la so vung 
		for(auto r:res) printf("%d ",r);  
	}
};
int main()
{
	anh A;A.sol();
}
