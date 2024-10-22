#include<windows.h>
#include<iostream>
using namespace std;
int main () {
	char time;
 int hrs,min,sec;
 cout<<"\t | Hours : ";
 cin>>hrs;
 cout<<"\t | minutes : ";
 cin>>min;
 cout<<"\t | seconds : ";
 cin>>sec;
 cout<<"Choose 1-AM    2- PM"<<endl;
	x: cin>>time;
	 while(1) {
 	system("cls");
 	if(sec>59){
 		min++;
 		sec=0;
	 }
	 if(min>59){
	 	hrs++;
	 	min=0;
	 }
	 if(hrs>23)
	 hrs=0;
	 cout<<"---------clock-------------\n";
	 if(time=='1'){
	 cout<<"\t"<<hrs<<":"<<min<<":"<<sec<<":"<<"AM"<<endl;	
	 }
	 else if(time=='2'){
	 	cout<<"\t"<<hrs<<":"<<min<<":"<<sec<<":"<<"PM"<<endl;
	 }
	 cout<<"----------@ @ @ @ @-------------\n";
	 sec++;
	 Sleep(900);
 }
	return 0;
}

