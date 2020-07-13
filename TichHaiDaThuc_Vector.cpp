#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n,m;
	vector<double> P,Q,R;  
	cin>>n;	P.resize(n+1);	for(auto &x:P) cin>>x; while(P.size()>1 && P.back()==0) P.pop_back(); n=P.size()-1;
	cin>>m;	Q.resize(m+1);	for(auto &x:Q) cin>>x; while(Q.size()>1 && Q.back()==0) Q.pop_back(); m=Q.size()-1;
	R.resize(n+m+1,0);
	for(int i=0;i<=n;i++){
		for(int j=0;j<=m;j++){
			R[i+j] +=P[i]*Q[j];
		}
	}
	cout<<n+m<<"\n";
	for(auto z:R) cout<<fixed<<setprecision(2)<<z<<" ";
	
	
  return 0;
}

