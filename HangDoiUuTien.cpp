#include <bits/stdc++.h>
using namespace std;
int main ()
{
  //priority_queue<int> Q;//Uu tien mac dinh lon truoc be sau
  priority_queue<int,vector<int>, greater<int>> Q;//Uu tien mac dinh lon truoc be sau
  int a[] = {3,7,2,1,4,7,2,8};
  for(auto x:a) Q.push(x);//xep vao hang
  while(Q.size()){
  	cout<<Q.top()<<" ";//Tham dinh
  	Q.pop();//Lay ra
  } 
  return 0;
}

