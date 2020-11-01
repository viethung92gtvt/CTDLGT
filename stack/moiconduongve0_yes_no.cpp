#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int s=30,f=10;
	stack<int> S;
	map<int,bool> d;//Danh dau, true la da co trong Stack
	S.push(s);d[s]=true;
	int ok=0;
	while(S.size())
	{
		int u=S.top();S.pop();
		for(int a=1;a*a<=u;a++){
			if(u%a==0){
				int v=(a-1)*(u/a+1);
				if(!d[v]) {
					S.push(v); d[v]=true;
				}
				if(v==f) ok=1;
			}
			
		}
	}
	cout<<(ok?"YES":"NO");
  return 0;
}

