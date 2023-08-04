#include "slist.cpp"
#include "slist_iterator.cpp"
#include "iostream"
#include "math.h"
using namespace std;
//Tính S(x,n) = x^1 + x^2 + x^3 + ... + x^n 
/* Tao cau truc du lieu cac so hang*/
class Data
{
	private:
    	int x;
    	int i;
    public:
    	Data(int _x=0,int _i=0){
    		x = _x;
    		i = _i;
		}
		int getX(){
			return x;
		}
		int getI(){
			return i;
		}
		
};
int main()
{
	SList<Data> L;
	int n,x;
    cout<<"Nhap x:";
    cin>>x;
    cout<<"Nhap n:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
		Data e(x,i);
		L.push_back(e);
	}
	cout<<"Danh sach lien ket don: \n";
	SList_Iterator<Data> it(&L);
	while (it.hasNext()) {
		cout <<it.getElement().getX()<<"^"<<it.getElement().getI()<<" ";
		it.Next();
	}
    double sum=0;
    it.Reset();
    while (it.hasNext()) {
		sum+=pow(it.getElement().getX(),it.getElement().getI());
		it.Next();
	}
    cout<<"\nTong cac phan tu trong danh sach: "<<sum;
	return 0;
}
