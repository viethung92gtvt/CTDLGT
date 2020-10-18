#include <bits/stdc++.h>
using namespace std;
int main ()
{
	char x[1000],*p=x;
	scanf("%[^\n]",x);//Nhap cho phep ca dau cach
	//cout<<x;
	Dau:
		if(*p==' '){
			p++;
			goto Dau;
		}
		else{
			if(*p==0) goto Ket;
			else {
				cout<<char(toupper(*p++));
				goto Than;	
			}
		}
    Than:
    	if(*p==' ') {
    		cout<<*p++; goto Dau;
		}
		else if(*p==0) goto Ket;
		else{
			cout<<char(tolower(*p++));
			goto Than;	
			}
    Ket:
    	cout<<"";
  return 0;
}

