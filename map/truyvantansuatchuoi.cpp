//Truy van tan suat chuoi
//http://laptrinhonline.club/problem/sparsearr
#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int n,q;
	cin>>n;
  	string s;
  	map<string,int> S;
  	for(int i=0;i<n;i++) 
	  {
	  	cin>>s;
	  	S[s]++;
	  }
	cin>>q;
  	string Q[q];
  	for(int i=0;i<q;i++) cin>>Q[i];
  	for(int i=0;i<q;i++) cout<<S[Q[i]]<<endl;
  return 0;
}

