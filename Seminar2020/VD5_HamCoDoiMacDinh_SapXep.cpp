#include <bits/stdc++.h>
using namespace std;
void sx(int *a,int n,bool ok=true){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]==ok) swap(a[i],a[j]); 
		}
	}
}
int main ()
{
  int a[5] = {3,7,2,1,4};
  int n = sizeof(a)/sizeof(int);
  sx(a,n);cout<<"\nDay SX Tang: \n";
  for(int i=0;i<n;i++) cout<<a[i]<<" ";
  sx(a,n,false);cout<<"\nDay SX Giam: \n";
  for(int i=0;i<n;i++) cout<<a[i]<<" ";
  return 0;
}

