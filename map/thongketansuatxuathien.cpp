//Tho'ng kê tan suat xuat hien
//http://laptrinhonline.club/problem/tichpxtansuat
#include <bits/stdc++.h>
using namespace std;
int main ()
{
  map<int,int> m;
  int n,x;cin>>n;
  for(int i=0;i<n;i++) {
  	cin>>x;
  	m[x]++;
  }
  for(auto t:m) cout<<t.first<<" "<<t.second<<endl;
  return 0;
}

