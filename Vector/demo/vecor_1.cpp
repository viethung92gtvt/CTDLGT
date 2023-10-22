#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
	int n;
	cin >> n;
	vector<int> v;
	for(int i = 0; i<n; i++){
		int x;
		cin >> x;
		v.push_back(x);
	}
	for(int i = 0; i<n-1; i++){
		for(int j = i+1; j<n; j++){
			if(v[i]>v[j]){
				swap(v[i], v[j]);
			}
		}
	}
	cout << "Phan tu nho nhat: " << v[0]<< endl;
	cout << "Phan tu lon  nhat: " << v[n-1]<< endl;
}
