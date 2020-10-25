// vector::begin/end
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main ()
{
  vector<int> myvector;
  for (int i=1; i<=5; i++) myvector.push_back(i);
myvector[0]=100;
  cout << "myvector contains:";
  vector<int>::iterator it;
  for (it = myvector.end()-1 ; it != myvector.begin()-1; it--){
*it = *it * (*it);
cout << *it << ' ';
}
  cout << '\n';

  return 0;
}

