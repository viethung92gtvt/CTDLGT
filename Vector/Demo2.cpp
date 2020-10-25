#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main ()
{
  vector<int> myvector;
  int myint;
  cout<<"Please enter some interger (enter 0 to end): ";
  do{
  	cin>>myint;
   myvector.push_back(myint);
  }while(myint!=0);
  cout<<"Size of vector = "<<myvector.size();
  
  //pop_back
  int sum  = 0;
  while(!myvector.empty()){
  	sum = sum + myvector.back();
  	myvector.pop_back();
  }
  cout<<"\nSum of elements in vector : "<<sum;
  return 0;
}

