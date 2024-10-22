#include<iostream>
#include<cmath>
#include<conio.h>
using namespace std;
int main()
{int user;
     for (int i=1;i<=10;i++)
     {
     	 cout<<"       enter the number the commissioning \n ";
          cin>>user;

     string name,father,job,brother,ci,vi,des,ag,jb,jo,ge;
     int age;
     int grade;
     float w,m,j;
    
	 switch (user){
	case 1:	
         cout<<"enter your name \n"<<name;
         
         cin>>name;
         cout<<"enter your age  \n";
         cin>>age;
         cout<<"Whats your job \n"<<job;
         cin>>job;
         cout<<"enter your father name \n"<<father;
         cin>>father;
         cout<<"enter his age \n"<<ag;
         cin>>ag;
         cout<<"enter the job \n"<<jb;
         cin>>job;
         cout<<"enter your brother name \n"<<brother;
         cin>>brother;
         cout<<"enter his age \n"<<ge;
         cin>>ag;
         cout<<"enter the job \n"<<jo;
         cin>>jo;
    break;
     case 2:
	      cout<<"enter your city:\n";
        	cin>>ci;
	      cout<<"enter your village :\n";
        	cin>>vi;
      	cout<<"enter description for city:\n";
	      cin>>des;
	break;
	case 3: 
     
	     cout<<"enter the w+m*3/j \n";
	     cin>>w>>m>>j;
	      cout<<"solve the equation  is "<<(w+m)	*3/j<<endl;
	break;
	      case 4:
	      float Quran,Arabic,Eng,Math,phy,grade;
	      cout<<"peleas enter grade the Quran "<<endl;
	      cin>>Quran;
	      cout<<"peleas enter grade the Arabic "<<endl;
	 
	     cin>>Arabic;
	 	 cout<<"peleas enter grade the Engish "<<endl;
	 	 cin>>Eng;
	 	 	 cout<<"peleas enter grade the Mathemetch "<<endl;
	 	 	 cin>>Math;
	 	 	 cout<<"peleas enter grade the phyesis "<<endl;
	 	 	 cin>>phy;
	 	 	 cout<<"the result is :"<<(Quran+Arabic+Eng+Math+phy)/5<<endl;
    break;
    
	 	case 5:
	 	
	 	cout<<"Enter your grade"<<endl;
	 	cin>>grade;
	 	if(grade>=50)
	 {
	 
	 	cout<<"succeeded"<<endl;
	 }
	 	else 
	 	cout<<"failed"<<endl;
	 	break;
	case 6: 
	jomp: 
	     cout<<"choose nember the month \n";
	     int M;
	     cin>>M;
	     switch(M)
	     {   
	     	case 1:
	     	cout<<"month <<january>> ";
	     	break;
	     	case 2:
			cout<<"month <<February>>";
			break;
			 case 3:
			 cout<<"month <<March>>";
			  break;
			 case 4:
			 cout<<"month <<April>>";
			 break;
			 case 5:
			 cout<<"month <<May>>";
			 break;
			 case 6:
		     cout<<"month <<june>>";
		     break;
		     case 7:
		     cout<<"month <<july>>";
		    break;
			 case 8:	
			 cout<<"month <<August>>";
			 break;
			 case 9:
			 cout<<"month <<Septemper >>";
			 break;
			 case 10:	 
			 cout<<"month <<october>>";
			 break;
			 case 11:
		     cout<<"month <<november>>";
		     break;
			 case 12:
		     cout<<"month <<december>>\n";
			 break;
		   default:
				cout<<"noe choose to 1-12";
							goto jomp;

			} break;
	case 7:
			cout<<"enter one day  ";
		{
			int today;
	     cin>>today;
	     switch(today)
	     {
	     	case 1:
	     	cout<<"today Saturday ";
	     	break;
	     	case 2:
			cout<<"today sunday";
			break;
			 case 3:
			 cout<<"tody monday";
			  break;
			 case 4:
			 cout<<"tody tuesday";
			 break;
			 case 5:
			 cout<<"tody wednesday";
			 break;
			 case 6:
		     cout<<"tody thursday ";
		     break;
		     case 7:
		     cout<<"tody friday";
		    break;
			 
		default:
				cout<<"noe choose to 1-7";
			} break;
		{
	case 8:		
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
	case 9:
		{
					
    {
  
		
		 int x,m,userChooes,reslt;
     
     cout<<"enter '1' in order to the solve and print the 3*x7*m and '2'check \n";
     cin>>userChooes;
     if (userChooes==1){
     cout<<"enter the value x and m \n";
     cin>>x>>m;
     
   reslt=3*x*7*m;

     cout<<"reslt this equation is\t"<<reslt<<"\t";
     if(reslt%2==0)
	 
	 cout<<"the number is even";
	 if(reslt/7)
	 cout<<" reslt accept to 7 \n";
           
	  else
	       cout<<"the reslt an odd  and not accept to 7";
	   }
	   
    if (userChooes==2){
	
	   	int number;
	     cout<<"enter the number \n ";
	     cin>>number;
	     if(number==0)
	     cout<<"the number is : 0  ";
         else if(number%2==0)
           { 
	            cout <<"the number is even \n";
           }
		 
		 else{
		 
		 cout<<"the number is odd \n";
             	}
             	
             	
		 bool prime=true;
		 for(int k=2;k<=number/2;k++){
		 
		     if(number%k==0)
		     {
		     	prime=false;
			 }
	   
		}
		if(prime==true){
			cout<<"the number is prime\n";

		}
		else{
					     	cout<<"the number is not prime\n";

		}
		if(number%55==0){
		cout<<"the nember accept to 55";
		}
		else 
		cout<<"the nember not accept to 55 ";
		 
		 } 
	   

}
			
				}		
					 
		}
	       goto jump;
	       
}
			
			}	
		break;
    
    }
	
		  }	 
		
			
			 		
			 	
			 
						 
			 
			 	
	     		
		 
		
		 
	 	
	    

      


