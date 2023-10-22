#include<iostream>
using namespace std;
class HCN
{
   public:
		     float dai,rong;
	public:
		HCN(){//Ham tao khong doi
			dai =5;
			rong=5;
			cout<<"Tu dong goi ham tao";
		}
		HCN(float cdai,float crong){
			dai =cdai;
			rong=crong;
			cout<<"Chay vao ham tao 2 doi";
		}
		void Nhap();
		float Dientich(){
			return dai*rong;
		}
		float Chuvi();
};
int main(){
	HCN A(9,8),B, *p;
	p=new HCN(5,7);
//	p->dai=6;
//	p->rong=5;
	//p->dai=15;p->rong=8;
	//cout<<p->Dientich();
	cout<<p->Dientich();
}

