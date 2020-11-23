#include <bits/stdc++.h>
using namespace std;

int BFS(int s,int f){//tra ve do sau khi tim thay, ko tim thay tra ve -1
	queue<int>Q;
	map<int,int> M;//do sau cac nut tren cay tim kiem
	Q.push(s);
	M[s]=0;
	while(Q.size()){
		int u = Q.front();Q.pop();
		for(int a=1;a*a<=u;a++){
			if(u%a==0){
				int v = (a-1)*(u/a+1);
				if(M.find(v) == M.end()){
					M[v] = M[u]+1;
					Q.push(v);
				}
				if(v==f) return M[v];
			}
		}
	}
	return -1;
}

int main ()
{

cout<<BFS(30,11);
  return 0;
}

