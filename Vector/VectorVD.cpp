#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main ()
{
  vector<int> V(4,7);
  cout<<"\n Suc chua (Capacity): "<<V.capacity();
  cout<<"\n So phan tu hien tai: "<<V.size();
  V.push_back(6);
  V.push_back(3);
  V.push_back(5);
  cout<<"\nDu lieu: ";for(auto x:V) cout<<x<<" ";
  cout<<"\n Suc chua (Capacity): "<<V.capacity();
  cout<<"\n So phan tu hien tai: "<<V.size();
  V.resize(3);//Dat lai size
  cout<<"\nDu lieu: ";for(int i=0;i<V.size();i++) cout<<V[i]<<" ";
  V.resize(13);//Dat lai size
  cout<<"\nDu lieu: ";for(int i=0;i<V.size();i++) cout<<V[i]<<" ";
  int k=5;
  for(int i=0;i<V.size();i++) V.at(i) = ++k;
  cout<<"\nDu lieu: ";for(int i=0;i<V.size();i++) cout<<V[i]<<" ";
  cout<<"\nDuyet xuoi: ";
  for(vector<int>::iterator it=V.begin();it!=V.end();it++) cout<<*it<<" ";
  cout<<"\nDuyet nguoc: ";
  for(vector<int>::reverse_iterator it=V.rbegin();it!=V.rend();it++) cout<<*it<<" ";
  V.insert(V.begin()+4,100);//Chen vao vi tri so 4 so 100
	cout<<"\nDu lieu: ";for(auto x:V) cout<<x<<" ";
	V.erase(V.begin()+7);
	cout<<"\nDu lieu: ";for(auto x:V) cout<<x<<" ";
  return 0;
}

