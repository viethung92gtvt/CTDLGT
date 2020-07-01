#include <iostream>
using namespace std;
void swap(int &a,int &b){
	int t = a;
	a = b;
	b = t;
}
bool chanTruoc(int left, int right){
	if(left%2!=0 && right%2==0) return true;
	if(left%2==0 && right%2!=0) return false;
	return (left > right);
}
int main ()
{
  int a[]={ 1, 4, 2, 3, 6, 5, 8, 9, 7 };
  int i,j;
  for(i=0;i<8;i++){
  	for(j=i+1;j<9;j++){
  		if(chanTruoc(a[i],a[j])) 
		  swap(a[i],a[j]);
	  } 
  }
  for(i=0;i<9;i++){
  		cout<<a[i];
 }
  return 0;
}

