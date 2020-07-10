#include <bits/stdc++.h>
using namespace std;
int main(){
 //Nhap xau x, viet hoa x;
  string x;
  cin>>x;//getline(cin,x);//doc co dau cach. getline(cin,x,'t');//Doc den khi gap ki tu t thi dung. Mac dinh la doc den xuong dong thi thoi.
  for(char &z:x) z=toupper(z);
  cout<<x;
  return 0;
}