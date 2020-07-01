//Xep n thanh kim loai
//Co n thanh kim loai a1,a2,...,an. Chi phi noi 2 thanh kim loai x va y la x + y. 
//Tim cach noi sao cho chi phi nho nhat 
#include <bits/stdc++.h>
using namespace std;
int main ()
{
  priority_queue<int,vector<int>, greater<int>> Q;//Uu tien mac dinh lon truoc be sau
  int n,a[]={4,5,2,8,9};
  for(auto x:a) Q.push(x);
  int sum=0;
   while(Q.size()>1){
  	int a=Q.top(); Q.pop();
	int b = Q.top();Q.pop();
  	int tong = a+b;
  	sum += tong;
  	Q.push(tong);
  } 
  cout<<sum;
  return 0;
}

