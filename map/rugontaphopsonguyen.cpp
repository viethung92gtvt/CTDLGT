//Rút g?n t?p h?p s? nguyên
//https://laptrinhonline.club/problem/tichpxrgthsn
#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int N,x;
	cin>>N;
	map<int,int> m;
	int *a = new int[N+1];
	int dem=0;
	for(int i=0;i<N;i++) {
	cin>>x;
	if(m[x]>0) continue;
	m[x]++;
	a[dem++] = x;
	}
	for(int i=0;i<dem;i++) cout<<a[i]<<" ";
  return 0;
}

