//Co n mon hang giao truoc thoi gian t co tien thuong v
//Moi don vi thoi gian thi giao duoc 1 mon
//TIm cach lap lich cho thu tu giao de tong so tien thuong lon nhat
#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int n;
	pair<int,int> A[]={{3,5},{3,7},{1,3},{2,4},{2,2},{4,1}};
  	priority_queue<int> Q;//Uu tien mac dinh lon truoc be sau
  	vector<int> T[1000];//Mang cac vecto de treo nho
  	int max = 0;
  	
  	for(auto h:A) {
  	T[h.first].push_back(h.second);
	  if(max<h.first) max = h.first;	
	  }
	  int result=0;
	  for(int i=max;i>=1;i--){
	  	for(auto x:T[i]) Q.push(x);
	  	if(Q.size()) {
	  		result +=Q.top(); Q.pop();
		  }
 	  } 
  	cout<<result;
}
