//Buon vang
#include <bits/stdc++.h>
using namespace std;
int main ()
{
  int n,i,j,s=0;
  cin>>n;
  int a[n];
  for(i=0;i<n;i++){
  	cin>>a[i];
  }
  for(i=0;i<n;i++){
  	int m=a[i+1];
  	for(j=i+2;j<n;j++){
  		if(m<a[j]) m = a[j];
	  }
	if(a[i]<m) s+=m-a[j];
  }
  cout<<s;
//Cach 2:
//int n,i,m,s=0;cin>>n;
//int a[n];
// for(i=0;i<n;i++){
//  	cin>>a[i];
//  }
//m = a[n-1];//ngay cuoi chi duoc ban
//for(i=n-2;i>=0;i--){
//	if(a[i]<m) s+=m-a[i];
//	else m=a[i];
//}
//cout<<s;
  return 0;
  
  
}

