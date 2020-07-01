#include <iostream>
using namespace std;
int main ()
{
  	int a=10;
	int *p=&a;
	cout<<p<<"\n"; 	// in gia tri con tro p (dia chi value)
	cout<<*p<<"\n"; // in gia tri tai dia chi p tro den (gia tri bien value)
	int **q=&p; 	// con tro q tro den dia chi cua con tro p
	cout<<q<<"\n"; 	// in gia tri con tro q (dia chi con tro p)
	cout<<*q<<"\n";	// in giá tri tai dia chi con tro q tro den (dia chi con tro p tro den)
	cout<<**q<<"\n";// gia tri bien value
  return 0;
}

