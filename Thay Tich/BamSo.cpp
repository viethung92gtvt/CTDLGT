//Nhap trong C++ Bam so
#include <bits/stdc++.h>
using namespace std;
int rutso(int k){
	if(k<10) return k;
	return rutso(rutso(k/10)+k%10);
}
int main ()
{
	freopen("data.txt","r",stdin);
//	string x;
//	cin>>x;
//	int k=0;
//	for(auto z:x) k+= z - '0';
char x; int k=0;
while(cin>>x){
	k+= x - '0';
}
  //cout<<rutso(k);
//Cach 2: Dau hieu chia het cho 9: Tong cac chu so chia het cho 9. 
k = k%9; if(k==0) k=9;
cout<<k;
  return 0;
}

