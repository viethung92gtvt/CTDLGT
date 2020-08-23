#include <bits/stdc++.h>
using namespace std;
//Ham ve mot vach 
void drawonetick(int ticklength, int ticklabel=-1){
	for(int i=0;i<ticklength; i++)
		cout<<"-";
	if(ticklabel>=0) 
		  cout<<" "<<ticklabel;
	cout<<"\n";
}
//Hàm ve mot don vi cua thuoc
void drawticks(int ticklength){
	if(ticklength>0){
		drawticks(ticklength-1);
		drawonetick(ticklength);
		drawticks(ticklength-1);
	}
}
//Hàm ve toan bo thuoc
/*
ninches: chieu dai thuoc
majorlength: Chieu dai vach ke chinh
*/
void drawruler(int ninches, int majorlength){
	drawonetick(majorlength,0);
	for(int i=1; i<= ninches; i++){
		drawticks(majorlength-1);
	    drawonetick(majorlength,i);
	}
}

int main(){
     drawruler(6,3);

}



