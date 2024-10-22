#include<iostream>
#include<cmath>
#include<conio.h>
using namespace std;
int main()
{
int userChoess,radius,side,lengh,width;  
	jump:
	cout<<"Enter 1 for Cricle OR 2 For Square OR 3 For Regtangle \n ";
	
	userChoess=getch();
	

	switch(userChoess){
		
		case '1':
			cout <<"enter radius Of the cricle \n";
			cin>>radius;
			cout <<"Cricle Space is : ";
			cout <<M_PI*(radius*radius)<<"\n";
			cout<<"Cricle Circumference is : ";
			cout <<2*M_PI*radius<<"\n";
			break;
		    case '2':
		  	cout <<"enter One side  Of the Squar \n";
		  	cin>>side;
		  	cout<<"Squar Space is:  ";
		  	cout <<side*side<<"\n";
		  	cout<<"Squar Circumference is :  ";
		  	cout <<side*4<<"\n";
		  	break;
	    	
	    	
	    case '3':
	    		
	    		cout<<"enter the rectangl lengh \n";
	    		cin>>lengh;
	    		cout<<"enter the rectangl width\n";
	    		cin>>width;
	    		cout<<" \n the space is : ";
	    		cout<<lengh*width;
	    		cout<<" \n the Circumference is : ";
	    		cout<<2*(lengh+width);
	    		break;
	    		
	    		
			default:
			cout <<"your choess is not coorect \n "	;
			goto jump;
				
			
	}
	
	
	cout <<"\n thank you \n";
	
	goto jump;
}
