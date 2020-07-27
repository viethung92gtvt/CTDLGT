// vector::operator[]
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main ()
{
  vector<int> myvector (10);   // 10 zero-initialized elements
  int size = myvector.size();
  // assign some values:
  for (unsigned i=0; i<size; i++) myvector[i]=i;
  // reverse vector using operator[]:
  for (unsigned i=0; i<size/2; i++)
  {
    int temp;
    temp = myvector[size-1-i];
    myvector[size-1-i]=myvector[i];
    myvector[i]=temp;
  }
  cout << "myvector contains:";
  for (unsigned i=0; i<size; i++)
    cout << ' ' << myvector[i];
  return 0;
}

