#include <bits/stdc++.h>
using namespace std;
set<string> S;
void lietke(string x){
	S.insert(x);
	if(x.length()==1) return;
	lietke(x.substr(0,x.length()-1));
	lietke(x.substr(1,x.length()-1));
}
int main ()
{
  lietke("banana");
  for(auto s:S) cout<<s<<"\n";
  return 0;
}

