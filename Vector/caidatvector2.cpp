//Thuc thi cai dat vector
#include <bits/stdc++.h>
using namespace std;
template <class T>
class Vector_reverse_it{
	private:
		T *curr;//Vi tri hien tai dang duyet
	public:
		Vector_reverse_it(T *c=0){
			curr = 0;
		}
		T *getCurr(){return curr;}
		T &operator*(){return *curr;}
		Vector_reverse_it operator++(){
			Vector_reverse_it temp = curr;
			curr--;
			return temp;
		}
		Vector_reverse_it operator++(int){
			curr=curr-1;
			return curr;
		}
		bool operator!=(Vector_reverse_it<T> it){
			return it.getCurr()!=curr;
		}
};

template<class T>
class Vector{
	private:
		int cap,num;
		T *buff;
	public:
		Vector(){
			cap = num = 0;
		}
		Vector(int k,T x){
			cap = num = k;
			buff= new T[k];
			for(int i=0;i<k;i++){
				buff[i] = x;
			}
		}
		~Vector(){
			if(buff) delete[] buff; buff=0;
		}
		int size(){return num;}
		int capacity(){return cap;}
		bool empty(){return num==0;}
		T &operator[](int k){return buff[k];}
		T &back(){return buff[num-1];	}
		void pop_back(){if(num>0) num--;}
		void push_back(T x){if(num==cap) reserve(cap*2+1);buff[num++]=x;}
		typedef T *iterator;
		iterator begin(){return buff;}
		iterator end(){return buff+num;}
		void insert(iterator it,T x){//chen x vao vi tri it dang tro toi
			int p = it - buff;
			if(num==cap) reserve(cap*2+1);
			for(int i=num-1;i>=p;i--) buff[i+1] = buff[i];
			buff[p] = x;
			num++;
		}
		void reserve(int newcap){//Cap phat lai thung chua
			T *temp = new T[newcap];
			for(int i=0;i<num;i++) temp[i] = buff[i];
			delete []buff;
			buff = temp;
		}
		void erase(iterator it){//Xoa phan tu tai vi tri it
			for(;it+1!=buff+num;it++) *it = *(it+1);
			num--;
		}
		typedef Vector_reverse_it<T> reverse_iterator;
		reverse_iterator rbegin(){return buff+num-1;}
		reverse_iterator rend(){return buff-1;}
};
int main ()
{
  Vector<int> V(6,5);
  for(int i=0;i<V.size();i++) cout<<V[i]<<" ";
  cout<<"\nDuyet xuoi: ";for(Vector<int>::iterator it=V.begin();it!=V.end();it++){
  	cout<<*it<<" ";
  }
  V.pop_back();
  cout<<"\nDuyet auto: ";for(auto v:V) cout<<v<<" ";
  V.insert(V.begin()+2,10);
  cout<<"\nDuyet auto: ";for(auto v:V) cout<<v<<" ";
  V.erase(V.begin()+2);
  cout<<"\nDuyet auto: ";for(auto v:V) cout<<v<<" ";
  cout<<"\nDuyet nguoc: ";
  for(Vector<int>::reverse_iterator it=V.rbegin();it!=V.rend();it++)
cout<<*it<<" ";
  return 0;
}

