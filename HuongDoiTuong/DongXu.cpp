#include <bits/stdc++.h>
using namespace std;
int main ()
{
  int n;
  cin>>n;
  bool A[n+1]={};//Toan 0 la xap
  for(int i=1;i<=n;j++){
  	for(int j=i;j<=n;j+=i) A[j] = 1-A[j];
  }
  int s=0;
  for(int i=1;i<=n;i++) s+=A[i];
  cout<<"Xap: "<<n-s<<" Ngua: "<<s;
  return 0;
}

