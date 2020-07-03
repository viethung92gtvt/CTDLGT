//http://laptrinhonline.club/problem/tichpxhoathuong
#include <bits/stdc++.h>
using namespace std;
void upperlowerswap(string xau){
	for(char x:xau) cout<<char(isupper(x)?tolower(x):toupper(x));
	cout<<endl;
}
void upper(string xau){
	for(char x:xau) cout<<char(isupper(x)?x:toupper(x));
	cout<<endl;
}
void lower(string xau){
	for(char x:xau) cout<<char(isupper(x)?tolower(x):x);
	cout<<endl;
}
bool isVowel(char ch) {
	char t = tolower(ch);
    if(t=='a' || t=='e' || t=='i' || t=='o' || t=='u') 
         return true;
    return false;
}

void upperVowel(string xau){
	for(char x:xau) cout<<char(isVowel(x)?tolower(x):toupper(x));
	cout<<endl;
	}
void hoathuongxenke(string xau){
	int i=0;
	while(xau[i]!='\0'){
	cout<<(char)toupper(xau[i++]);
	cout<<(char)(xau[i]!='\0'?tolower(xau[i++]):'\n');
}
}
int main(){
string xau; cin>>xau;
cout<<xau<<endl;
upperlowerswap(xau);
upper(xau);
lower(xau);
upperVowel(xau);
hoathuongxenke(xau);
}


