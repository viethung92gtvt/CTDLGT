#include <bits/stdc++.h>
using namespace std;
map<char,bool> vowel={{'a',1},{'e',1},{'i',1},{'u',1},{'o',1}};
int main ()
{
  string s;
  cin>>s;
  cout<<s<<endl;
  string t=s; for(char &c:t) c=islower(c)?toupper(c):tolower(c); cout<<t<<endl;
  t=s; for(char &c:t) c=toupper(c); cout<<t<<endl;
   t=s; for(char &c:t) c=tolower(c); cout<<t<<endl;
   t=s; for(char &c:t) c=vowel[tolower(c)]?tolower(c):toupper(c); cout<<t<<endl;
   t=s; for(int i=0;i<t.size();i++) t[i]=i%2?tolower(t[i]):toupper(t[i]); cout<<t<<endl;
  
  return 0;
}

