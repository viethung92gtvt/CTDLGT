#include <bits/stdc++.h>
using namespace std;
int MAX(int *a,int n){
	if(n==1) return a[0];
	return max(MAX(a,n-1),a[n-1]);
}
int main ()
{
  int a[5]  ={4,8,2,1,7};
  cout<<MAX(a,5);
  return 0;
}

