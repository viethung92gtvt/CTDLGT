#include <bits/stdc++.h>
using namespace std;
int main ()
{
  	char buffer[100];
  	int num=10;
	itoa(num,buffer,2);//Chuyen so nguyen sang chuoi theo he co so 2; char *  itoa ( int value, char * str, int base );
  	fputs(buffer,stdout);
  	return 0;
}

