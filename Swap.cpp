#include <bits/stdc++.h>
using namespace std;
void swap(int &a,int &b){
	int t=a;a=b;b=t;
	a=a^b;//hoac a=a+b de tranh bi tran so
	b=a^b;//hoac b=a-b
	a=a^b;//hoac a=a-b	

}
int main ()
{
  
  return 0;
}

