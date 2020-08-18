//Kieu du lieu pair
#include <bits/stdc++.h>
using namespace std;
int main ()
{
  pair<string,int> s,t,p;
  s.first = "Le Van Minh";
  s.second = 6;
  t = make_pair("Nguyen Dinh",6);
  p = {"Pham Phap",3};
  cout<<"Sinh vien 1: "<<s.first<<" "<<s.second<<endl;
  cout<<"Sinh vien 2: "<<t.first<<" "<<t.second<<endl;
  cout<<"Sinh vien 3: "<<p.first<<" "<<p.second<<endl;
  return 0;
}
