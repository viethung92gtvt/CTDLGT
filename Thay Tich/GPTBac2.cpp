#include <bits/stdc++.h>
using namespace std;
struct ptb2{
	double a,b,c;//du lieu
	void nhap();
	void giai();
};
void ptb2::nhap(){
	cin>>a>>b>>c;
}
void ptb2::giai(){
	if(!a) {
		if(!b) cout<<(c?"vo nghiem":"vo so nghiem");
		else printf("%.3f",-c/b);
	}
	else{
		b = b/2;
		double d = b*b - a*c;
		if(d>0) {
			double x1=(-b-sqrt(d))/a;
			double x2=(-b+sqrt(d))/a;
			
		printf("%.3f\n%.3f",x1<x2?x1:x2,x1<x2?x2:x1);
		}
		else if(!d) printf("%.3f",-b/a);
		else cout<<"vo nghiem";
	}
}
int main ()
{
  ptb2 pt;
  pt.nhap();
  pt.giai();
  return 0;
}

