#include <iostream>
using namespace std;
int main(){
	int numbers[5]={2,4,6};
	int *p;
	p = numbers;
	cout<<*p<<endl;
	cout<<*(p+1)<<endl;
	cout<<*p+1<<endl;

}


