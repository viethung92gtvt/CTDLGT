// vector::push_back
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main ()
{
	int n; cin>>n;
  vector<int>v;
  for(int i = 0 ; i < n ; i++){
  	int x ; cin>>x;
  	v.push_back(x);
  }
  int a = INT_MIN;
  int b = INT_MAX;
  for(int i = 0 ; i < v.size(); i++){
  	a = max(a,v[i]);
  	b = min(b,v[i]);
  }
  cout<<"max : "<< a<<endl<<"min :"<<b;
  return 0;
}

