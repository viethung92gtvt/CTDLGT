//Thap Ha Noi
#include <bits/stdc++.h>
using namespace std;
void thap(int n,char A,char B,char C){
	if(n==1) {cout<<"Chuyen dia "<<n <<" tu "<<A<<" sang "<<B<<endl; return;}
	thap(n-1,A,C,B);
	cout<<"Chuyen dia "<<n <<" tu "<<A<<" sang "<<B<<endl;
	thap(n-1,C,B,A);
}
int main ()
{
  thap(100,'A','B','C');
  return 0;
}

