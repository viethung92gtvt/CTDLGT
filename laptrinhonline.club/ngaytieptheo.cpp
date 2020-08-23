#include <bits/stdc++.h>
using namespace std;

void nextday(int &day, int &month, int &year){
	if(year%4==0&&month==2&&day==29){
		day=1;
		month++;
	}
	else if(month==2&&day==28){
		day=1;
		month++;
	}
	else if((month==1||month==3||month==7||month==8||month==10)&&day==31){
		day=1;
		month++;
	}
	else if(day==30) {
		day=1;
		month++;
	}
	else if(month==12&&day==31) {
		day=1;
		month=1;
		year++;
	}
	else day++;
	
//	day++;
//	if(year%4==0){
//		if(month==2){
//			if(day>29) {
//				month++;
//				day=1;
//			}
//		}else if(month==1||month==3||month==7||month==8||month==10||month==12){
//			if(day>31) {
//				month++;
//				day=1;
//			}
//		}
//	}
}

int main(){
int day=29, month=2,year=2019;
nextday(day,month,year);
cout<<day<<" "<<month<<" "<<year;
}


