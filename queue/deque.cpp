#include <bits/stdc++.h>
using namespace std;
int main ()
{
	deque<int> Q;//hang doi 2 dau
	for(int i=1;i<=10;i++) i%2?Q.push_front(i):Q.push_back(i);
	while(Q.size()){
		cout<<Q.front()<<" "; Q.pop_front();
		//cout<<Q.front()<<" "; Q.pop_front();
	}
  return 0;
}

