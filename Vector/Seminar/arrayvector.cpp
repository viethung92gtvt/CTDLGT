//cai dat vector bang mang
#include <bits/stdc++.h>
using namespace std;
#ifndef __arrayvector__cpp
#define __arrayvector__cpp
template <class T>
class Vector{
	unsigned int cap,num;
	T *buff;
	public:
		typedef T *iterator;
		Vector();
		Vector(unsigned int C);
		Vector(unsigned int n, T x);
		~Vector(){
			if(buff) delete[] buff;
		}
		void reserve(unsigned int newcap){
			if(newcap < cap) return;
			T *temp = new T[newcap];
			for(int i=0;i< num; i++) temp[i]=buff[i];
			if(buff) delete[] buff;
			buff = temp;
		}
		T back(){
			return buff[num-1];
		}
		unsigned int size() {
			return num;
		}
		bool empty(){
			return num==0;
		}
		void pop_back(){
			if(num) num--;
		}
		void push_back(T x);
	T &at(int k){
		if(k<0||k>=num){			
			k=0;
		} 
		return buff[k];

	}
	T &operator[](int k){
		if(k<0||k>=num){			
			k=0;
		} 
		return buff[k];
	}
	void resize(int newsize,T x=0){
		if(newsize>cap) reserve(newsize);
		 num = newsize;
		 for(int i=0;i<num;i++) buff[i]=x;
	}
	void remove(int k){
		if(k<0||k>=num) return;
		for(int i=k+1;i<=num;i++){
			buff[i-1] = buff[i];
		}
		num--;
	}
	void insert(int k,T x){
		if(k<0 || k>=num) return;
		if(num==cap){
			reserve(cap*2+1);
		}
		for(int i=num-1;i>=k;i--) buff[i+1] = buff[i];
		buff[k] = x;
		num++; 
	}
	iterator begin(){
		return buff;
	}
	iterator end(){
		return buff+num;
	}
};
template <class T>
Vector<T>::Vector(){
			cap=0;num=0;buff=NULL;
		} 
template <class T>
void Vector<T>::push_back(T x){
	if(cap==num) reserve(cap*2+1); buff[num++] = x;
}
template <class T>
Vector<T>::Vector(unsigned int C){
	cap=C;
	num=0;
	buff = new T[C];
}
template <class T>
Vector<T>::Vector(unsigned int n, T x){
	cap = num = n; 	buff = new T[n];
	for(int i=0;i<n;i++) buff[i] = x;
}
#endif
int main ()
{
  Vector<int> V;
  for(int i=1;i<=10;i++) V.push_back(i*i);
  cout<<"\nCac phan tu: "; for(auto x:V) cout<<x<<" ";
  return 0;
}
