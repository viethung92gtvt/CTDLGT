//Ham template
#include <bits/stdc++.h>
using namespace std;
template <class T>//Hoac trong C la: template <typename Tich>
T binhphuong(T x){
	return x*x;
}
int main ()
{
  cout<<binhphuong(7)<<endl;
  cout<<binhphuong(1.3)<<endl;
  cout<<binhphuong<long long>(1234567)<<endl;//Hoac cout<<binhphuong(1234567LL)<<endl;
  
  return 0;
}

