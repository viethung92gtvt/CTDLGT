#include <bits/stdc++.h>
using namespace std;
int main ()
{
  int a[5]={2,5,7};
  int vitri=0;
  //for(;vitri<5;vitri++) cout<<a[vitri]<<" ";
  int *vt=a;
  for(;vt<a+5;vt++) cout<<*vt<<" ";
  return 0;
}

