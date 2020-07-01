#include <iostream>
using namespace std;
int main(){
	int ***a;
	int **b;
	int *c;
	int d=5;
	c=&d;
	b=&c;
	a=&c;
	cout<<a;
	

}
