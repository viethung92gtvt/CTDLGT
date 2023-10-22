#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
	int n;
	cin>>n;
	int sum=0;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
		}
	for(int i=0;i<n;i++){
	    sum+=v[i];
		}
	cout<< "tong la: "<<sum;
	}	
	
