#include <iostream>
using namespace std;
int main(){
	int a[5];
	a[0]=1;//Gán 2 cho phan tu a[0]
	a[1]=a[0]+2;//a[1] co gia tri bang 3
	a[2] = a[0]+a[1];//a[2] co gia tri bang 4
	a[a[1]]= a[a[0]+1];
	cout<<a[3];
}


