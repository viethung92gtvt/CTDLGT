// vector::rbegin/rend
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main ()
{
  vector<int> myvector (5);  // 5 default-constructed ints

  int i=0;

  vector<int>::reverse_iterator rit = myvector.rbegin();
  for (; rit!= myvector.rend(); ++rit)
    *rit = ++i;

  cout << "myvector contains:";
  for (vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
    cout << ' ' << *it;
  cout << '\n';

  return 0;
}
