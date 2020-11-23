#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int n, k;
	cin >> n >> k;
	int a[n];
	for(int i=0; i<n; i++) cin >> a[i];
	sort(a, a+n);
	queue<int> q;
	for(int i=0; i<n; i++) {
		if(q.empty()) q.push(a[i]);
		else if(q.front()+k<=a[i]) {
			q.pop();
			q.push(a[i]);
		} else q.push(a[i]);
	}
	cout << q.size();

  return 0;
}

