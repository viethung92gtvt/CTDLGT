//GPT bac2
//Huong doi tuong
#include <bits/stdc++.h>
using namespace std;
struct ptb2{
	double a,b,c;//du lieu
	void nhap();
	void giai();
};
void ptb2::nhap(){
	cout<<"Nhap he so a,b,c: ";
	cin>>a>>b>>c;
}
void ptb2::giai(){
	if(!a) {
		if(!b) cout<<(c?"vo nghiem":"vo so nghiem");
		else cout<<"Nghiem bac nhat"<<-c/b;
	}
	else{
		b = b/2;
		double d = b*b - a*c;
		if(d>0) cout<<setprecision(3)<<"x1 = "<<-(b-sqrt(d))/a<<"x2 = "<<-(b+sqrt(d))/a<<"\n";
		else if(!d) cout<<"Nghiem kep "<<-b/a;
		else cout<<"vo nghiem";
	}
}
int main ()
{
	cout<<setprecision(4)<<2.3326323;
  ptb2 pt;
  pt.nhap();
  pt.giai();
  return 0;
}

