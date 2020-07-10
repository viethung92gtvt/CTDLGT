#include <bits/stdc++.h>
using namespace std;
map<int, unsigned long long> Dic; 
unsigned long long S(int n){
	if(Dic.find(n)!=Dic.end()) return Dic[n];
	if(n==0) return 2;
	if(n==1) return 5;
	return Dic[n]=5*S(n-1) - 6*S(n-2);
	
	}
int main ()
{
  for(int i=1;i<=41;i++) cout<<"S["<<i<<"] = "<<S(i)<<endl;
  return 0;
}

