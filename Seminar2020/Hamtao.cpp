#include <bits/stdc++.h>
using namespace std;
struct sv{
	string ten;
	int diem;
//	sv()//Ham tao tao ra doi tuong
//	{
//		ten="";
//		diem=0;
//	}
	sv(string t="",int d=0){//Ham tao co doi
		ten=t; diem = d;
	}
};
int main ()
{
  sv x;//goi den ham tao
  cout<<"ten "<<x.ten;  cout<<"Diem "<<x.diem;
  sv y("Nam",5);//Goi den ham tao co doi
  cout<<"\nten "<<y.ten;  cout<<"Diem "<<y.diem;
  sv *p = new sv("Van",3);
  cout<<"\nten "<<p->ten;  cout<<"Diem "<<p->diem;
  
  return 0;
}

