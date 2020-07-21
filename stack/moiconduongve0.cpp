#include <bits/stdc++.h>
#include "arraystack.cpp"
#include "nodestack.cpp"
using namespace std;
int main ()
{
  int n;
  map<int,bool> Dic;
  Stack<int> S;
  cin>>n;
  S.push(n);Dic[n]=true;
  while(S.size()){
  	int u = S.top(); S.pop();
  	for(int a=1;a*a<=u;a++){
  		if(u%a==0) {
  			int v = (a-1)*(u/a+1);
  			if(!Dic[v]){
  				Dic[v] = true;
  				S.push(v);
			  }
		  }
	  }
  }
  for(auto z:Dic) cout<<z.first<<" ";
  return 0;
}

