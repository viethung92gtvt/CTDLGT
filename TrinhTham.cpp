#include <bits/stdc++.h>
#include "list\slist.cpp"

using namespace std;
int main ()
{
  int n,k,x;
  slist<int> L;//Luu vi tri theo gia tri giam dan dang xet
  cin>>n>>k;
  vector<int> a(n+5);
  for(int i=1;i<=n;i++) cin>>a[i];
  for(int i=1;i<k;i++){
  	while(L.size()>0 &&a[L.back()]<a[i]) L.pop_back();
  	L.push_back(i);
  }
  for(int i=k;i<=n;i++){
  	while(L.size()>0 &&a[L.back()]<a[i]) L.pop_back();
  	L.push_back(i);
  	if(i-L.front()>=k) L.pop_front();
  	cout<<a[L.front()]<<" ";
  }
  return 0;
}

