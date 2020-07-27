//cai dat queue bang mang
#include <bits/stdc++.h>
using namespace std;
#ifndef _arrayqueue__cpp
#define _arrayqueue__cpp
template<class T>
class Queue{
	unsigned cap,F, L, num;//F la first, L luu tru den last -1
	T *buff;
	public:
		Queue(){
			cap=F=L=num=0; buff=nullptr;
		}
		~Queue(){if(buff) delete[]buff;
		}
		void reserve(int newcap){//mo rong kha nang luu tru
			if(newcap<=cap) return;
			T *tem = new T[newcap];
			for(int i=F,j=0;i<F+num;i++) tem[j++] = buff[i%cap];
			F=0;
			L=num+F;
			if(buff) delete[]buff;
			buff=tem;
			cap=newcap;
		}
		T &front(){
			return buff[F];
		}
		T &back(){
			return L==0?buff[cap-1]:buff[L-1];
		}
		void push(T x){
			if(num==cap) {
			reserve(cap*2+2); 
			}
			buff[L]=x; L = (L+1)%cap; num++;	
		}
		void pop(){
			F=(F+1)%cap;num--;
		}
		int size(){return num;
		}
		bool empty(){return num==0;
		}
};
#endif
