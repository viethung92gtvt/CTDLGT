#include <bits/stdc++.h>
using namespace std;
template <class T,class K>
struct Diem{
	T x;
	K y;
	K getmax();//{return x>y?x:y;}
};
template<class T,class K>
K Diem<T,K>::getmax(){return x>y?x:y;}
int main ()
{
  Diem<int,long long> M;
  M.x = 2;
  M.y = 3000000000L;
  cout<<"M.x = "<<M.x;
  cout<<"\nM.y = "<<M.y;
  cout<<"\nMax = "<<M.getmax();
   return 0;
}

