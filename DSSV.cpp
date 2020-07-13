#include <bits/stdc++.h>
using namespace std;
struct sv
{
	string ten, gioi;
	int d,m,y,id;
	sv(string _ten="",string _gioi="",int _d=0,int _m=0,int _y=0,int _id=0 ){
		ten =_ten;
		gioi=_gioi;
		d=_d;
		m=_m;
		y=_y;
		id=_id;
	}
};
bool ss(sv u,sv v){
	if(u.y!=v.y) return u.y<v.y;
	if(u.m!=v.m) return u.m<v.m;
	if(u.d!=v.d) return u.d<v.d;
	return u.id<v.id;
}
struct lop{
	vector<sv> A;
	void readfile(FILE *f=stdin){
		char t[100],g[100];
		int d,m,y,id=0;
		while(!feof(f)){
			id++;
			fscanf(f,"%[^0-9]%d/%d/%d %s\n",t,&d,&m,&y,g);
			A.push_back(sv(string(t),string(g),d,m,y,id));
		}
	}
	void Sort(){
		sort(A.begin(),A.end(),ss);
	}
	void out(){
		for(auto s:A) cout<<s.ten<<s.d<<"/"<<s.m<<"/"<<s.y<<" "<<s.gioi<<endl;
	}
};
int main ()
{
  lop C;
 // FILE *f= fopen("sv.txt","r");
  C.readfile();
  //fclose(f);
  C.Sort();
  C.out();
  return 0;
}

