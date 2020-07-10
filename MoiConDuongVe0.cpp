#include <bits/stdc++.h>
using namespace std;
long long dem=0;
int conduongve0(int n){
	if(n==0) {
		return 1;
	}
	int i,m = sqrt(n),dem=0;
	for(i=1;i<=m;i++){
		if(n%i==0){
			dem+=conduongve0((i-1)*(n/i+1));
			dem = dem%1000000007;
		}
	}
	return dem;
}
int main(){
	int x=200;
	cout<<conduongve0(x);
}


