#include <bits/stdc++.h>
using namespace std;
int tach(int n){
return n%2||n<5?1:(tach(n/2+2)+tach(n/2-2));
}

int Tach(int n,string p="\n"){
if(n%2||n<5) cout<<p<<n;
else{
Tach(n/2-2,p+"\t");
cout<<p<<n;
Tach(n/2+2,p+"\t");	
}
}

int main ()
{
  cout<<tach(60)<<"\n";
  Tach(60);
  return 0;
}

