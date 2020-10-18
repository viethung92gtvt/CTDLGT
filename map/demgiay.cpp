//http://laptrinhonline.club/problem/tichpxdemdep
//Dem' giay`
#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int n;
	map<int,char> L,R;
  	cin>>n;
  	for(int i=0;i<n;i++){
  		char x;int y;
  		cin>>x>>y;
  		x=='L'?L[y]++:R[y]++;
	  }
	  int dem=0;
	for(auto t:L){
		if(R.find(t.first)!=R.end()) dem+=min(R[t.first],t.second);
	}  
	cout<<dem;
  return 0;
}

