#ifndef STUDENT_CPP
#define STUDENT_CPP
#include "iostream"
using namespace std;
class Student
{
    private:
    	int masv;
    	char *hoten;
    public:
    	friend istream & operator >>(istream &is, Student &s);
    	friend ostream & operator <<(ostream &os, Student s);
    	int getMSV(){
    		return masv;
		}
		bool operator>(Student B){
				if(this->getMSV()>B.getMSV()) return true;
		return 0;
		}

};
istream & operator >>(istream &is, Student &s)
{
	 cout<<"\nNhap ma sv:";
	 is>>s.masv;
	 cout<<"Nhap ho va ten:";
	 is.ignore(1);
	 s.hoten = new char[30];
	 is.get(s.hoten,30);
	 return is;
}
ostream & operator <<(ostream &os, Student s)
{
     os<<s.masv<<"\t"<<s.hoten;
	 return os;
}
#endif
//int main(){
//	Student s;
//	cin>>s;
//	cout<<s;
//}
