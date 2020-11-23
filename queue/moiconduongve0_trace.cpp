#include <bits/stdc++.h>
using namespace std;
map<int,int> M;//Mang cha de do duong
void induong(int s,int f){
	if(s==f) cout<<s;
	else{
		induong(s,M[f]); cout<<"->"<<f;
	}
}
int BFS(int s,int f){//tra ve do sau khi tim thay, ko tim thay tra ve -1
	queue<int>Q;
	Q.push(s);
	M[s]=0;
	while(Q.size()){
		int u = Q.front();Q.pop();
		for(int a=1;a*a<=u;a++){
			if(u%a==0){
				int v = (a-1)*(u/a+1);
				if(M.find(v) == M.end()){
					M[v] = u;
					Q.push(v);
				}
				if(v==f) {
					induong(s,f);
					return 1;
				}
			}
		}
	}
	return -1;
}

int main ()
{

if(BFS(300,10)==-1) cout<<"Khong di duoc nhe";
  return 0;
}

