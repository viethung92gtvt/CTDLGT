#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int s=30,f=10;
	stack<int> S;
	map<int,int> d;//Danh dau phan tu tao ra no'. VD: d[0]=30, d[15]=28; d[28]=30
	S.push(s);d[s]=true;
	int ok=0;
	while(S.size()&&ok==0)
	{
		int u=S.top();S.pop();
		for(int a=1;a*a<=u;a++){
			if(u%a==0){
				int v=(a-1)*(u/a+1);
				if(d.find(v)==d.end()) {
					S.push(v); d[v]=u;
				}
				if(v==f){
					stack<int> P;
					while(f!=s){
						P.push(f);
						f = d[f];
					}
					cout<<s;
					while(P.size()) {
						cout<<"->"<<P.top();P.pop();
					}
					ok=1;
 				}
			}
			
		}
	}
	if(!ok) cout<<"Khong di duoc";
  return 0;
}
