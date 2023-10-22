#include<iostream>
using namespace std;
class Point
{
   private:
		     float x,y;
	public:
		Point(){
			x = 0;
			y = 0;
		}
		Point(float _x,float _y){
			x = _x;
			y = _y;
		}
		void setXY(float _x,float _y){
			x = _x;
			y = _y;
		}
		float getX(){
			return x;
		}
		float getY(){
			return y;
		}
		void InputXY(){
			cout<<"input x,y: ";
			cin>>x>>y;
		}
		void PrintXY(){
			cout<<"("<<x<<","<<y<<")";
		}
};
class Line{
	private:
		Point A,B;
	public:
		Line(){
			
		}	
		Line(Point _A,Point _B){
			A.setXY(_A.getX(),_A.getY());
			B.setXY(_B.getX(),_B.getY());
		}
		void PrintLine(){
			cout<<"Toa do 2 dau mut: ";
			A.PrintXY();B.PrintXY();
		}
		void InputLine(){
			cout<<"Nhap diem dau: ";
			A.InputXY();
			cout<<"Nhap diem cuoi: ";
			B.InputXY();
		}
		
};
int main(){
	Point A;
	A.PrintXY();cout<<endl;
	Point B(1,2);
	B.PrintXY();
	
	Line L1,L2(A,B);
	cout<<"\nNhap doan thang L1:";
	L1.InputLine();
	cout<<"\nNhap doan thang L2:";
	L2.InputLine();
	cout<<"\nDoan thang L1 la:";
	L1.PrintLine();
	cout<<"\nDoan thang L2 la:";
	L2.PrintLine();	
	
	
//	cout<<"\nNhap toa do diem A: ";
//	A.InputXY();
//	cout<<"\nNhap toa do diem B: ";
//	B.InputXY();
//	cout<<"\nToa do A,B vua nhap la: ";A.PrintXY();B.PrintXY();
}

