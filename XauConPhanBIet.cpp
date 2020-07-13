#include <bits/stdc++.h>
using namespace std;
map<string,bool> D;
void lietke(string x){
	if(D[x]) return;
	D[x]=true;
	if(x.length()==1) return;
	lietke(x.substr(0,x.length()-1));
	lietke(x.substr(1,x.length()-1));
}
int main ()
{
	string x;
	cin>>x;
  	lietke(x);
  	for(auto z:D) cout<<z.first<<"\n";
  	return 0;
}

