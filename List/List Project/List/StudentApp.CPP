#include "iostream"
#include "conio.h"
#include "SList.cpp"
#include "SList_Iterator.cpp"
#include "Student.cpp"
using namespace std;

#define SIZE 1
#define INSERT_FIRST 2
#define INSERT_LAST 3
#define SORT 4
#define DISPLAY_LIST 5

class StudentApp{
private:
	SList<Student> *list;
public:
	StudentApp();
	void listSize();
	void insertFirst();
	void insertLast();
	void sortByMSV();
	void displayList();
	int menu();
	void run();
};
//	int ssMSV(Student A, Student B){
//		if(A.getMSV()>B.getMSV()) return 1;
//		return 0;
//	}
//--------------------------------------------------------------------------------------
StudentApp::StudentApp(){
	list = new SList<Student>();
}
//--------------------------------------------------------------------------------------
void StudentApp::listSize(){
	cout<<"So sinh vien hien co la:"<<list->size();
}
//--------------------------------------------------------------------------------------
void StudentApp::insertFirst(){
	Student x;
	cout<<"Nhap thong tin sinh vien:";
	cin>>x;	
	if(list->push_front(x))
		cout<<"Da them sinh vien vao dau thanh cong.";
	else
		cout<<"Them sinh vien khong thanh cong.";
}
//--------------------------------------------------------------------------------------
void StudentApp::insertLast(){
	Student x;	
	cout<<"Nhap thong tin cua sinh vien:";
	cin>>x;	
	if(list->push_back(x))
		cout<<"Da them sinh vien vao cuoi thanh cong.";
	 else
		cout<<"Them sinh vien khong thanh cong.";
}

void StudentApp::sortByMSV(){
	
	list->sort();
	cout<<"Sap xep sinh vien theo ma tang dan thanh cong.";
	
}
//--------------------------------------------------------------------------------------
void StudentApp::displayList(){
	SList_Iterator<Student> itr(list);
	while (itr.hasNext()) {
		cout<<"\n"<<*itr;	
		itr.Next();
	}
	cout<<"Cac sinh vien hien co trong danh sach: ";
}
//--------------------------------------------------------------------------------------
int StudentApp::menu(){
	int n; 
	cout<<"1. Kich thuoc hien tai cua danh sach.\n";
	cout<<"2. Chen phan tu vao dau danh sach. \n";
	cout<<"3. Chen phan tu vao cuoi danh sach. \n";
	cout<<"4. Sap xep sinh vien tang dan theo ma.\n";
	cout<<"5. Hien thi toan bo danh sach:\n";
	cout<<"0. Ket thuc.\n";
	cout<<"   Hay nhap vao so 0..6:";
	cin>>n;
	return n;
}
 //--------------------------------------------------------------------------------------
void StudentApp::run(){
	int choise;
	do{
		system("cls");
		choise = menu();
	    system("cls");
		switch(choise){
			case SIZE:
				listSize();
				break;
			case INSERT_FIRST:
				insertFirst();
				break;
			case INSERT_LAST:
				insertLast();
				break;
			case SORT:
				sortByMSV();
				break;
			case DISPLAY_LIST:
				displayList();
				break;
		}
		getch();
	}while(choise!=0);
}
//--------------------------------------------------------------------------------------
int main() {
	StudentApp app;
	app.run();
}
