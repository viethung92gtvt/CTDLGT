//Bi danh
#include <bits/stdc++.h>
using namespace std;
int main ()
{
//  int x;
//  int &y = x;
//  cout<<"Dia chi cua x: \n"<<&x;
//  cout<<"Dia chi cua y: "<<&y;
  //-------
  //Nhap xau x, viet hoa x;
  string x;
  getline(cin,x,'t');
  for(char &z:x) z=toupper(z);
  cout<<x;
  return 0;
}

