#include <bits/stdc++.h>
using namespace std;
int main ()
{
	//priority_queue<int> Q;//hang doi uu tien// KO con la tuyen tinh
	priority_queue<int,vector<int>,greater<int>> Q;//hang doi uu tien be
	
	for(int x:{4,7,2,8,1,5}) Q.push(x);
	while(Q.size()){
		cout<<Q.top()<<" "; Q.pop();
	}
  return 0;
}

