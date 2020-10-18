#include <bits/stdc++.h>
using namespace std;
void Swap(int &a,int &b){
	a^=b;
	b^=a;
	a^=b;
}
int main ()
{
  int a=4,b=5;
  Swap(a,b);
  cout<<"\na = "<<a;
  cout<<"\nb = "<<b;
  return 0;
}

