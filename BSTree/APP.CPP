#ifndef APPVECTOR_H
#define APPVECTOR_H 1

//Dinh nghia cac hang

#define INSERT_AT_RANK 1
#define REPLACE_AT_RANK 2
#define GET_AT_RANK 3
#define REMOVE_AT_RANK 4
#define GET_SIZE 5
#define LIST_ELEMENT 6
#include "conio.h"
#include "d:\tc\bin\code2007\vector\vector.cpp"
#include "d:\tc\bin\code2007\vector\iterator.cpp"
#include "iostream.h"

class Appvector{
private:
	Vector<int> *theVector;
public:
	Appvector(Vector<int> *);
	void getAtRank();
	void insertAtRank();
	void replaceAtRank();
	void removeAtRank();
	void getSize();
	void list();
	int menu();
	void run();
};

//---------------------------------------------------------------------------------
Appvector::Appvector(Vector<int>*v){
	theVector = v;

}
//---------------------------------------------------------------------------------
void Appvector::getAtRank (){
	int r, value;
	cout<<"Lay gia tri tai vi tri r=";
	cin>>r;
	 if(theVector-> getAtRank(r,  value))
		 cout<<"Gia tri lay duoc la: "<<value;
	 else
		 cout<<"Bac nhap vao nam ngoai gioi han cua vector";
}


//---------------------------------------------------------------------------------

void Appvector::insertAtRank (){
	int r,value;
	cout<<"Nhap gia tri can chen:";
	cin>>value;
	cout<<"Nhap vi tri can chen:";
	cin>>r;
	if(theVector->insertAtRank(r, value))
		cout<<"Chen phan tu "<<value<< " thanh cong";
	else
		cout<<"Chen phan tu khong thanh cong! Hay kiem tra lai vi tri chen.";

}
//---------------------------------------------------------------------------------
void Appvector::replaceAtRank (){
	int r,value,value_old;
	cout<<"Nhap gia tri can thay the:";
	cin>>value;
	cout<<"Nhap vi tri can thay the:";
	cin>>r;
	if(theVector->replaceAtRank(r,value, value_old)){
		cout<<"Da thau the thanh cong!";
		cout<<"Gia tri cu la : "<<value_old;
	}
	else
		cout<<"Thay the khong thanh cong! Co the do vi tri nam ngoai so chieu hien co";
}

//---------------------------------------------------------------------------------
void Appvector::removeAtRank(){
	int r, value;
	cout<<"Loai bo phan tu tai vi tri:";
	cin>>r;
	if(theVector->removeAtRank(r,value))
		cout<<"Gia tri da loai bo: "<<value;
	else
		cout<<"Vi tri loai bo nam ngoai gioi han chieu cua vector!";
}

//---------------------------------------------------------------------------------

void Appvector::getSize (){
	cout<<"So chieu hien co cua vector: "<<theVector->size();
}
//-----------------------------------------------------------------------------------
void Appvector::list(){
	VectorItr<int> itr(theVector, theVector->size());
	while(itr.hasNext())
		cout<<itr.next()<<"  ";

}
//---------------------------------------------------------------------------------
int Appvector::menu (){
	int choise;
	cout<<"\n 1. Chen phan tu vao vector.";
	cout<<"\n 2. Thay the mot phan tu cua vector";
	cout<<"\n 3. Lay gia tri cua mot phan tu cua vector";
	cout<<"\n 4. Loai bo mot phan tu cua vector";
	cout<<"\n 5. Xem so chieu cua vector";
	cout<<"\n 6. Danh sach cac phan tu hien co trong Vector";
	cout<<"\n 7. Ket thuc.";
	cout<<"\n Hay chon mot muc de thuc hien 1..6:";
	cin>>choise;
	return choise;


}
//---------------------------------------------------------------------------------
void Appvector::run (){
	int choise;
	choise=menu();
	while (choise!=7){
		switch(choise){
		case REMOVE_AT_RANK:
			removeAtRank();
			break;
		case REPLACE_AT_RANK:
			replaceAtRank();
			break;
		case INSERT_AT_RANK:
			insertAtRank();
			break;
		case GET_AT_RANK:
			getAtRank();
			break;
		case GET_SIZE:
			getSize();
			break;
		case LIST_ELEMENT:
			list();
			break;
		}
		getch();
		clrscr();
		choise=menu();
	}

}
//---------------------------------------------------------------------------------
#endif