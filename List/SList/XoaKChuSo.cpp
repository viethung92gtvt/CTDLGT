//Xóa k chu so duoc so lon nhat
//Y tuong: 
/*Duyet tu trai qua phai cac chu so 'c' cua n Lap lai cac buoc sau:
B1. Them 1 so lon hon tat ca cac chu so cua n vao front cua list.
B2. While(c lon hon phan tu back cua list và k>0) thi pop_back va k--. Chuyen den B3.
B3. push_back c vào list. Neu chua duyet het cac chu so cua n thi quay lai buoc 1. 
Nguoc lai sang b4.
B4. While(k>0) thi L.pop_back()
B5. Xoa phan tu front khoi list.
B6. In cac phan tu cua list tu dau den cuoi*/
#include <bits/stdc++.h>
using namespace std;
int main(){
string x;cin>>x;//Chuoi x the hien so tu nhien n
int t;cin>>t;//So test
int k[t+1];for(int i=1;i<=t;i++) cin>>k[i];//Cac gia tri k cho cac test
list<int> L;//List de luu chuoi x sau khi sau k chu so
for(int i=1;i<=t;i++){
L.push_back(10);
for(char c:x){
	while((c-'0')>L.back()&&k[i]>0) {
		L.pop_back();
		k[i]--;
	}
	L.push_back(c-'0');
}
while(k[i]--) L.pop_back();
L.pop_front();
for(auto a:L) cout<<a;
cout<<"\n";
L.clear();
}
}

