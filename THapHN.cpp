#include <bits/stdc++.h>
using namespace std;
int buoc=0;
void thapHN(int n,char A='A',char B='B', char C='C'){
	if(n==1) {
		cout<<"Buoc"<<++buoc<<" Chuyen dia "<<n<<" tu "<<A<<" sang "<<B<<endl;
		return;	
	}
	thapHN(n-1,A,C,B);
	cout<<"Buoc"<<++buoc<<" Chuyen dia "<<n<<" tu "<<A<<" sang "<<B<<endl;
	thapHN(n-1,C,B,A);
}
int main ()
{
	int n;
	cin>>n;
	thapHN(n);  
  return 0;
}

