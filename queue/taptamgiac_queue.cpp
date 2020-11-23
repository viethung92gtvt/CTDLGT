#include <bits/stdc++.h>
#include "Queue.cpp"
using namespace std;
int main ()
{
	int n,res=0;
	cin>>n;
	int a[n];
	for(auto &x:a) cin>>x;
	sort(a,a+n,greater<int>());//sx giam dan
	Queue<int> Q;
	for(int x:a) {
		while(!Q.empty() and Q.front()-Q.back()>=x) Q.pop();
		Q.push(x);
		if(res<Q.size()) res =Q.size();
	}
	cout<<"Tap lon nhat "<<res;
  return 0;
}

