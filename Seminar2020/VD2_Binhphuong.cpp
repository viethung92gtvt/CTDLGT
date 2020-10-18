#include <bits/stdc++.h>
using namespace std;
void binhphuong(int x,int *y){
	*y=x*x;
}
int main ()
{
	int a=4,b=5;
	binhphuong(a,&b);
	cout<<"a = "<<a<<"\n"<<"b = "<<b; 
  return 0;
}

