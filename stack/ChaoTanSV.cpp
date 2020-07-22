#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[40005];//Chieu cao cua sv thu i
	for(int i=1;i<=n;i++) cin>>a[i];
	a[0] = INT_MAX;
	stack<int> S;
	int d[40005];
	S.push(INT_MAX);
	for(int i=1;i<=n;i++) {
		
		if(a[i]<S.top()) {
			if(!d[i]) d[i]=S.top();
			S.push(i);
		}
		else{
		while(a[S.top()]<a[i]) {
			if(d[S.top()]==0) 	d[S.top()]= i;
			S.pop();
		}
			d[i]=S.top();
			S.push(i);
			
		}
	}
	for(int i=1;i<=n;i++) cout<<d[i]-1<<" ";
}


