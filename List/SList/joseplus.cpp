//Joseplus
//Co n nguoi xep thanh 1 vong tron dnah so tu 1 den n. Cho k < n.
//Dem tu nguoi dau tien, cu k nguoi thi xoa di nguoi thu k. hoi nguoi
//Cuoi cung trong danh sach la nguoi so may.
#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int n,k;
	cin>>n>>k;
	list<int> L;
	for(int i=1;i<=n;i++) L.push_back(i);
	while(L.size()>1) {
		for(int i=1;i<k;i++){
			L.push_back(L.front());
			L.pop_front();
		}
		L.pop_front();
	}
	cout<<L.front();
  return 0;
}

