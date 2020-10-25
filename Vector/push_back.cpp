// vector::push_back
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main ()
{
  vector<int> myvector;
  int myint;

  cout << "Please enter some integers (enter 0 to end):\n";

  do {
    cin >> myint;
    myvector.push_back (myint);
  } while (myint);

  cout << "myvector stores " << int(myvector.size()) << " numbers.\n";

	int sum=0;
	while(myvector.empty()==false){
		sum+=myvector.back();
		myvector.pop_back();
	}
	cout<<"\nSum of elements in vector: "<<sum;
  return 0;
}

