// vector::pop_back
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main ()
{
  vector<int> myvector;
  int sum=0;
  myvector.push_back (100);
  myvector.push_back (200);
  myvector.push_back (300);

  while (!myvector.empty())
  {
    sum+=myvector.back();
    myvector.pop_back();
  }

  cout << "The elements of myvector add up to " << sum << '\n';

  return 0;
}
