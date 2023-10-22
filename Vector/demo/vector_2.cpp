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
	int min = v.back();
	int max = v.back();
	for(int i = 0; i < n; i++){
		if(min > v[i]) min = v[i];
		if(max < v[i]) max = v[i];
	}
	cout << "Phan tu nho nhat: " << min<< endl;
	cout << "Phan tu lon  nhat: " << max<< endl;
}
