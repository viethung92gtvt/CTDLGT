#include<iostream>
using namespace std;
char x[10005][1000];
int main()
{
    int i=0;
    
    while(scanf("%s",x[i++])!=EOF){
    	cout<<x[i-1]<<" ";
		}
    for(i--;i>=0;i--) printf("%s ",x[i]);
}

