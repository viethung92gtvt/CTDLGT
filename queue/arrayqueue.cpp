//cai dat queue bang mang
#include <bits/stdc++.h>
using namespace std;
#ifndef _arrayqueue__cpp
#define _arrayqueue__cpp
template<class T>
class Queue{
	unsigned N,F, L, num;//F la first, L luu tru den last -1
	T *buff;
	public:
		Queue(){N=F=L=num=0; buff=NULL;}
		~Queue(){if(buff) delete[]buff;}
		void reserve(int newcap){//mo rong kha nang luu tru
			if(newcap<=N) return;
			T *tem = new T[newcap];
			for(int i=F,j=0;i<F+num;i++) tem[j++] = buff[i%N];
			F=0;
			L=num+F;
			if(buff) delete[]buff;
			buff=tem;
			N=newcap;
		}
		T &front(){return buff[F];}
		T &back(){return L==0?buff[N-1]:buff[L-1];}
		void push(T x){
			if(num==N) {
			reserve(N*2+2);
			}
			buff[L]=x; L = (L+1)%N; num++;
		}
		void pop(){F=(F+1)%N;num--;}
		int size(){return num;}
		bool empty(){return num==0;}
};
#endif
