#include<bits/stdc++.h>
using namespace std;
bool leapyear(int v){
	if((v%4==0 && v%100!=0)|| (v%400==0)){
		return true;
	}
	return false;
}
int daysinmonth(int month,int year){
	 int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	 if(month==2 && leapyear(year)){
	 	return 29;
	 }
	 return days[month-1];
}
int total(int d1[],int d2[]){
	int totaldays=0;
	
	// calculate the days in d1 year after d1 month
	for(int i=d1[1]+1;i<=12;i++){
		totaldays+=daysinmonth(i,d1[2]);
	}
	
	//calcualte the days d2 year before d2 month
	for(int i=1;i<d2[1];i++){
		totaldays+=daysinmonth(i,d2[2]);
	}
	
	//claculate the days in between years
	for(int i=d1[2]+1;i<d2[2];i++){
		totaldays+=leapyear(i)?366:365;
	}
	
	//calculate the days in d1 month 
	totaldays+=daysinmonth(d1[1],d1[2])-d1[0]+1;
	
	totaldays+=d2[0]-1;
	return totaldays;
}
int main(){
	int d1[]={10,2,2014};
	int d2[]={10,3,2015};
	cout<<"Output :"<<total(d1,d2);
}
