#include <bits/stdc++.h>
using namespace std;
long long gt(int n){
	return n?gt(n-1)*n:1;
}
int main ()
{
  for(int i=0;i<=10;i++) cout<<"giai thua cua "<<i<<" la "<<gt(i)<<"\n";
  return 0;
}

