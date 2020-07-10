//Nhap day so nguyen Tim max cac so chan
#include <bits/stdc++.h>
using namespace std;
int main ()
{
  int n,M = INT_MIN;//am vo cung
  cin>>n;
  int a[n];
  for(auto &x:a) cin>>x;
  for(auto x:a){
  	if(x%2==0){
  		if(M<x) M=x;
	  }
  }
  if(M==INT_MIN) cout<<"Khong co phan tu chan";
  else cout<<"Max chan "<<M;
  return 0;
}

