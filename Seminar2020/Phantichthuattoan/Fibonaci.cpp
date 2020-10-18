//Fibonaci 
#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int n,i;
	cin>>n;
	long long F[n+1]={1,1};//F[0] = 1, F[1] = 1
	for(i = 2;i<=n;i++) F[i] = F[i-1] + F[i-2];
	cout<<F[n]; 
	cout<<"\nSize of int "<<sizeof(int);  
	cout<<"\nSize of long "<<sizeof(long);  
	cout<<"\nSize long long "<<sizeof(long long);  
  return 0;
}

