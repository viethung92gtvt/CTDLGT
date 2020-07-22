//canh cua than ky
#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int n;
	string ds[]={"dangdungcntt","tienquanutc","quang123","maianh","nguyenminhduc2820"};
//	queue<string> Q;
//	for(auto x:ds) Q.push(x);
//	cin>>n;
//	while(n>1){
//		Q.push(Q.front());
//		Q.push(Q.front());
//		Q.pop();
//		n--;
//	}
//	cout<<Q.front();  
//Cach 2
	int t,a[10005];
	cin>>t;
	for(int i=1;i<=t;i++) cin>>a[i];
	for(int i=1;i<=t;i++){
		queue<pair<string,int>> Q;
		for(auto x:ds) Q.push({x,1});
		while(a[i]>Q.front().second){
		Q.push({Q.front().first,Q.front().second*2});
		a[i]-=Q.front().second;
		Q.pop();
	}
	cout<<Q.front().first<<endl;
	}
}

