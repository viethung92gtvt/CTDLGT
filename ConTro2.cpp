// my first pointer
#include <iostream>
using namespace std;
int main(){
 int value1 = 5, value2 = 15;
  int *p1, *p2;
 
  p1 = &value1;     // p1 = d?a ch? c?a value1
  p2 = &value2;     // p2 = d?a ch? c?a value2
  *p1 = 10;         // gi� tr? tr? b?i p1 = 10
  *p2 = *p1;        // gi� tr? tr? b?i p2 = gi� tr? tr? b?i p1
  p1 = p2;          // p1 = p2 (ph�p g�n con tr?)
  *p1 = 20;         // gi� tr? tr? b?i p1 = 20
  
  cout << "value1==" << value1 << "/ value2==" << value2;
  return 0;

}

