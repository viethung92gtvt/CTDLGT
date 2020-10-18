#include <bits/stdc++.h>
using namespace std;

int zero(int n,int d=0){
	if(n<d) return 0;
	if(n==d) return 1;
	int s=0;
	for(int a=1;a*a<=n;a++){
		if(n%a==0) s+=zero((a-1)*(n/a+1),d);
	}
	return s;
}
int main ()
{
  cout<<zero(30,10);
  return 0;
}

