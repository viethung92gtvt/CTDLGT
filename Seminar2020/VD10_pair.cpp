#include <bits/stdc++.h>
using namespace std;
#define ten first
#define diem second 
typedef pair<string,int> sv;
int main ()
{
  sv s,p,q,r;
  s.ten = "Nguyen Van A";s.diem=5;
  cout<<"\nHo ten: "<<s.ten<<" diem "<<s.diem;
  p=s;
  cout<<"\nHo ten: "<<p.ten<<" diem "<<p.diem;
  q = make_pair("Tran Van C",3);
  cout<<"\nHo ten: "<<q.ten<<" diem "<<q.diem;
  r = {"Xuan Thuy",5};
  cout<<"\nHo ten: "<<r.ten<<" diem "<<r.diem;
  return 0;
}

