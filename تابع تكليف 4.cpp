#include <iostream>
using namespace std;
int main()
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

	
     
