#include <bits/stdc++.h>
using namespace std;
int BinarySum(int *a,int i, int n){
	if(n==1) return a[i];
	return BinarySum(a,i,n/2)+BinarySum(a,i+n/2,n/2); 
}
int main(){
int a[]={1,2,3,4,6,7,8,9};
cout<<BinarySum(a,0,8);

}
