#include<iostream>
using namespace std;
int mx;
int main()
{
	 for(int i=1;i<=100;i++)
	 {
	 	 cout<<"1. Enter number to divide it on 58 \n";
	 cout<<"2. Enter 3 number to there the large and to there the smaller \n";
	 cout<<"3. Enter 1 number to there  find z-- \n";
	 cout<<"4. Enter 1 number to there  find --z \n";
	 cout<<"5. Enter 1 number to there  find z++ \n";
	 cout<<"6. Enter x,a to there find a*=x/5\n";
	 cout<<"find smile face  using cout \n";
	 cin>>mx;
	 switch(mx)
	 {int i,z,a,s,x,number;
	 	case 1:
	 		cout<<"enter number to divide it on 58 \n ";
	 		cin>>number;
	 		if (number%58==0)
	 		cout<<"the number accepts \n";
	 		else 
	 		cout<<"no accepts \n";
	 		break;
		    case 2:
		     cout<<"2. Enter 3 number to there the large and to there the smaller \n";
		     cin>>i>>a>>s;
		     cout<<"large is :"<<min(i,min(a,s))<<endl;
		     cout<<"th smaller is :"<<max(i,max(a,s))<<endl;
		     break;
		    case 3:
	         cout<<"3. Enter 1 number to there  find z-- \n";
	         cin>>z;
	         cout<<"the z-- ="<<z--<<endl;
	         cout<<"the --z="<<--z<<endl;
	         break;
	        case 4:
	        	 cout<<"4. Enter 1 number to there  find --z \n";
	        	 cin>>z;
	        	 cout<<"the --z = "<<--z<<endl;
	        	 break;
	        case 5:
	        	 cout<<"5. Enter 1 number to there  find z++ \n";
	        	 cin>>z;
	        	 cout<<"the z++ = "<<z++<<endl;
	        	 break;
	        case 6:
	             cout<<"6. Enter x,a to there find a*=x/5\n";
	             cin>>a>>x;
	            cout<<"resalt a*=x/5 is "<<(a*=x/5)<<endl;   //or//a*(x/5)
				 break;
			case 7:
				 	 cout<<"find smile face  using cout \n";
				 	 cout<<" [^_^]  "<<endl;
	
			}	 	 cout<<"\n thank you \n";
	}


}
