#include <bits/stdc++.h>
using namespace std;
struct sv{
	char ht[100];
	int diem;
	char khoa[10];
	sv(char _ht[]="",int _diem=0,char _khoa[]=""){
		strcpy(ht,_ht);
		strcpy(khoa,_khoa);
		diem =_diem;
	}
};
int n;
void readfile(FILE *f=stdin,sv listSV[]=NULL){
	fscanf(f,"%d\n",&n);
	for(int i=0;i<n;i++){
		char ht[100];
		int diem;
		char khoa[10];
		fscanf(f,"%[^0-9] %d %[^0-9\n]\n",ht,&diem,khoa);
		listSV[i] = sv(ht,diem,khoa);
	}
}
bool ssDiem(sv a,sv b){
	return a.diem>b.diem;
}
int main ()
{
	FILE *f = fopen("sinhvienMarathon.txt","r");
	sv listSV[201];
	readfile(f,listSV);
	sort(listSV,listSV+n,ssDiem);
	int i;
	int Giai[4],dem=0,vtriKhac=-1;
		for(i=0;i<n&&(dem<=3|| vtriKhac==-1);i++){
		if(strcmp(listSV[i].khoa,"DDT")==0) {
			dem++;
			if(dem<=3)Giai[dem]=i;
		}
		else if(vtriKhac==-1) vtriKhac=i;
	}
	cout<<"Giai nhat :"<<listSV[Giai[1]].ht<<endl;
	cout<<"Giai nhi :"<<listSV[Giai[2]].ht<<endl;
	cout<<"Giai ba :"<<listSV[Giai[3]].ht<<endl;
	cout<<"Giai giao luu :"<<listSV[vtriKhac].ht<<endl;
  return 0;
}

