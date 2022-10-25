//GPT trung phuong ax^4 + bx^2 + c = 0
#include <bits/stdc++.h>
using namespace std;
void f(double t, vector<double> &x){
	if(t==0) x.push_back(0);
	if(t>0) x.push_back(-sqrt(t)),x.push_back(sqrt(t));
	
}
void gpt(double a, double b, double c){
	vector<double> x;//vector nghie
	if(!a){
		if(!b){
			cout<<(c==0?-1:0);
			return;
		}
		else f(-c/b,x); 
			
	}else{
		double d = b*b -  4*a*c;
		if(d==0) f(-b/2/a,x);
		else if(d>0){
			f((-b-sqrt(d))/2/a,x);
			f((-b+sqrt(d))/2/a,x);
		}
	}
	cout<<x.size();
}
int main ()
{
	int a,b,c;
	cin>>a>>b>>c;
  gpt(a,b,c);
  return 0;
}

