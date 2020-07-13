//In giai thua
#include <bits/stdc++.h>
using namespace std;

int main ()
{
	vector<int> V(1,1);
	int n;
	cin>>n;
	for(int i=2;i<=n;i++){
		int t=0;
		for(auto &v:V){
			t+=v*i;
			v=t%10;
			t=t/10;
		}
		while(t) {
			V.push_back(t%10);t/=10;
		}
	}
	for(vector<int>::reverse_iterator it=V.rbegin();it!=V.rend();it++){
		cout<<*it;
	}  
  return 0;
}

