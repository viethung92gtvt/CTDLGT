#include <bits/stdc++.h>
using namespace std;
template <class T>
ReverseArray(T *A, int i, int j){
	if(i<j){
		swap(A[i],A[j]);
		ReverseArray(A,i+1,j-1);
	}
}
int main(){
	int a[]={1,2,3,4,5,6};
	ReverseArray(a,0,5);
	for(auto i:a) cout<<i;
}


