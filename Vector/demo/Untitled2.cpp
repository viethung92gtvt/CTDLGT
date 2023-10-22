#include<stdio.h>
int main(){
	int a,b,cong,tru,nhan;
	float chia;
	scanf("%d%d",&a,&b);
	cong=a+b;
	tru=a-b;
	nhan=a*b;
	chia=(float)a/b;
	printf("tong cua 2 so la:%d\n",cong);
	printf("hieu cua 2 so la:%d\n",tru);
	printf("tich cua 2 so la:%d\n",nhan);
	printf("thuong cua 2 so la:%.2f",chia);
	}
	
