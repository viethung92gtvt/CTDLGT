//In giai thua
#include <bits/stdc++.h>
using namespace std;

int main ()
{
	vector<int> V(1,1);
	int n;
	cin>>n;
	for(int i=2;i<=n;i++){
		int nho=0;
		for(auto &v:V){
			nho+=v*i;
			v=nho%10;
			nho=nho/10;
		}
		while(nho) {
			V.push_back(nho%10);nho/=10;
		}
	}
	for(vector<int>::reverse_iterator it=V.rbegin();it!=V.rend();it++){
		cout<<*it;
	}  
  return 0;
}

