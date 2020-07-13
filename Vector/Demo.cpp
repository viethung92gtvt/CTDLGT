#include "CaiDatVector.cpp"
using namespace std;
int main ()
{
  Vector<int> V;
  for(int i=1;i<=10;i++) V.push_back(i*i);
  cout<<"\nCac phan tu: "; for(auto x:V) cout<<x<<" ";
  return 0;
}

