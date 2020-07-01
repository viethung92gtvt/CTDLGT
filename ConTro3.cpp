#include <iostream>
using namespace std;
int main(){
	int *p;
	p = new int;//allocate space for an int
	*p = 100;
	cout<<"O nho "<<p<<" "<<"co gia tri la: "<<*p;
	delete p;  
}

