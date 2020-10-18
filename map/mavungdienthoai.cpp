//Mã vùng di?n tho?i
//https://laptrinhonline.club/problem/i0501
#include <bits/stdc++.h>
using namespace std;
int main ()
{
  map<int,string> m={{61,"Brasilia"},{71,"Salvador"},
{11,"Sao Paulo"},{21,"Rio de Janeiro"},{32,"Juiz de Fora"},
{19,"Campinas"},{27,"Vitoria"},{31,"Belo Horizonte"}};
int number;
cin>>number;
if(m.find(number)!=m.end()) cout<<m[number];
else cout<<number<<" nao cadastrado";









  return 0;
}

