#include <bits/stdc++.h>
using namespace std;
int main ()
{
  vector<int> V;//Ham tao khong doi tao ra 1 vector rong
  vector<long> V1(5,7L);//Ham tao 2 doi tao ra 5 so 7
  vector<char> V2(6,'e');//Ham tao ra vector chua 6 phan tu
  for(auto x:V1) cout<<x;
  cout<<"\nKha nang luu cua V1 la "<<V1.capacity();
  cout<<"\nKha nang luu cua V2 la "<<V2.capacity();
  cout<<"\nKha nang luu cua V la "<<V.capacity();
  V2.resize(3);
  return 0;
}

