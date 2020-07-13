#include <bits/stdc++.h>
using namespace std;
map<string,int> Doi;
int n;
void readfile(FILE *f=stdin){
	fscanf(f,"%d\n",&n);
	int d = n*(n-1)/2;
	for(int i=1;i<=d;i++){
		char doi1[100];
		char doi2[100];
		int diem1,diem2;
		fscanf(f,"%[^0-9]%d - %d %[^0-9\n]\n",doi1,&diem1,&diem2,doi2);
		string s1(doi1);
		string s2(doi2);s2+=" ";
		if(diem1==diem2) {
			Doi[s1]+=1; Doi[s2]+=1;
		}
		else if(diem1>diem2) {
			Doi[s1]+=3; Doi[s2]+=0;
		}
		else {
		Doi[s1]+=0;	Doi[s2]+=3;
		}
	}
}
int main ()
{
	
	FILE *f = fopen("bongda.txt","r");
	readfile(f);
	for(auto z:Doi) cout<<z.first<<z.second<<endl;
  return 0;
}

