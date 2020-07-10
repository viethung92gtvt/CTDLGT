#include <bits/stdc++.h>
using namespace std;
void drawonetick(int ticklength, int ticklabel=-1){
	cout<<"    ";  
	for(int i=0;i<ticklength; i++)
		cout<<"-";
	if(ticklabel>=0) 
		  cout<<" "<<ticklabel;
	cout<<"\n";
}
//Hàm v? m?t don v? c?a thu?c
void drawticks(int ticklength){
	if(ticklength>0){
		drawticks(ticklength-1);
		drawonetick(ticklength);
		drawticks(ticklength-1);
	}
}
//Hàm v? c? thu?c
void drawruler(int ninches, int majorlength){
	drawonetick(majorlength,0);
	for(int i=1; i<= ninches; i++){
		drawticks(majorlength-1);
	    drawonetick(majorlength,i);
	}
}

int main(){
     drawruler(6,5);

}



