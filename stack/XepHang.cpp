#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	long long a[100005];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	stack<pair<int,int> > s;
	long long dem=0;s.push({a[i],1});
	
	for(int i=2;i<n;i++){
		while(i<=n&&s.top().second==a[i]){
			s.top().second++;
			i++;
		}
		if(s.top().first>a[i]) s.push({a[i],1});
		else{
			
		}
		int t=i+1;
		dem++;
		s.push(a[t]);
		t++;
		while(t<=n&&s.top()<=a[t]){
			s.push(a[t]);
			dem++;t++;
		}
	}
	cout<<dem;
}


