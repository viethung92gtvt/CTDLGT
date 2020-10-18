#include <bits/stdc++.h>
using namespace std;
#define in(x) printf("Nhap %s = ",#x),scanf("%d",&x);
#define out printf
#define py(a,b,c) a*a==b*b+c*c
int main ()
{
	//Kiem tra bo ba pythagor
  int a,b,c;
  in(a);
  in(b);in(c);
  if(a>0&&b>0&&c>0&&(py(a,b,c)||py(b,a,c)||py(c,a,b))) out("Dung roi");
  else out("Sai roi");
  return 0;
}

