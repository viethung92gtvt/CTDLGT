//Lowps
//http://laptrinhonline.club/problem/ia9642
#include <bits/stdc++.h>
using namespace std;
int main ()
{
  int n,x;
  cin>>n;
  map<int,int> m;
  for(int i=0;i<n;i++) {
  	cin>>x;
	m[x]++;
}
int max = 0;
int index= 0;
for(auto t:m) if(max<=t.second) {
	max  =t.second;
	index = t.first;	
}
cout<<index;
  return 0;
}

