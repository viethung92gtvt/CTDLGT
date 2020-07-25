#include <bits/stdc++.h>
using namespace std;
int main ()
{
  vector<int> V;
  vector<int>::iterator it;
// set some values (from 1 to 10)
  for (int i=1; i<=10; i++) V.push_back(i);
    V.erase (V.begin()+5);
  for(auto v:V) cout<<v<<" ";
  return 0;
}

