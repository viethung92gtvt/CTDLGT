// vector::back
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main ()
{
  vector<int> myvector;

  myvector.push_back(10);

  while (myvector.back() != 0)
  {
    myvector.push_back ( myvector.back() -1 );
  }

  cout << "myvector contains:";
  for (unsigned i=0; i<myvector.size() ; i++)
    cout << ' ' << myvector[i];
  cout << '\n';

  return 0;
}
