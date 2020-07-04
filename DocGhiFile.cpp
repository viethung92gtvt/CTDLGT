#include <bits/stdc++.h>
using namespace std;
string readfile(string fname){
		ifstream f(fname);
		string t;
		while(!f.eof()){
			string x;
			getline(f,x);
			t+=x+"\n";
		}
		f.close();
		return t;
}
void write(string t, FILE *f=stdout){//mac dinh xuat ra man hinh
	fprintf(f,"%s",t.c_str());
}
int main(){
	string t =readfile("kytu.txt");
	FILE *f = fopen("kytuhoa.txt","w");
	write(t);//Xuat ra man hinh
	write(t,f);//Xuat ra file
	fclose(f);
	return 0;
}


