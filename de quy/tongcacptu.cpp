#include <bits/stdc++.h>
using namespace std;
int tong(int *a,int n){
	if(n==1) return a[0];
	return a[n-1]+tong(a,n-1); 
}
int main(){
int a[]={1,2,3,4,6};
cout<<tong(a,5);
}
