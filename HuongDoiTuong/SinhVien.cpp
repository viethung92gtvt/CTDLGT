//danh sach sinh vien
#include <bits/stdc++.h>
using namespace std;
class sv{
	public:
		char ten[30];//string
		int tuoi;
		float diem;
		sv(char *_ten="",int _tuoi=0,float _diem=0){
			strcpy(ten,_ten);
			tuoi = _tuoi;
			diem= _diem;
		}
};
class lophoc{
	vector<sv> A;
	public:
	void readfile(char *fname){
		FILE *f = fopen(fname,"r");
		while(!feof(f)){
			char x[100]; int y; float z;
			fscanf(f,"%[^0-9]%d %f\n",x,&y,&z);
			A.push_back(sv(x,y,z));
		}
		fclose(f);
	}
	void write(FILE *f=stdout){//mac dinh xuat ra man hinh
	fprintf(f,"\nDanh sach sinh vien \n");
		for(auto z:A) fprintf(f,"%-30s%10d %8.2f\n",z.ten,z.tuoi,z.diem);
	}
	void sx(bool sosanh(sv,sv)){
		for(int i=0;i<A.size();i++)
		for(int j=i+1;j<A.size();j++){
			if(sosanh(A[j],A[i])) swap(A[i],A[j]);
		}
	}
};
bool sstuoi(sv u,sv v){//sx tuoi tang
	return u.tuoi>v.tuoi;
}
bool ssdiem(sv u,sv v){//sx diem tang
	return u.diem>v.diem;
}
int main ()
{
  lophoc L;
  L.readfile("sv.txt");
  L.write();//Xuat ra man hinh
  FILE *f = fopen("sinhvien.txt","w");
  L.write(f);//Xuat ra file
  L.sx(sstuoi);L.write(f);
  L.sx(ssdiem);L.write(f);
  fclose(f);
  return 0;
}

