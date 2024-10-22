#include<iostream>
using namespace std;
int main(){
	jomp:
		cout<<"enter the case \n";
		int omn;
		cin>>omn;
		switch(omn)
		{
		case 1:	
		   cout<<"enter number \n";
          int number;
          cin>>number;
          if(number>0)
            cout<<"the number positive \n";
            else if(number==0)
	 	{
			cout<<"the number = 0 \n";
		} 
		   else 
	        cout<<"negative number \n";
	        break;
        goto jomp;
		
		case 2:
			int grade;
			tran:
			  cout<<"Enter your grade \n";

			cin>>grade;
			if(grade>=90 && grade<=100)
			cout<<"the grade is:'A'\n";
			    else if(grade>=80 && grade<90)
			{
				cout<<"the grade is:'B'\n";
			}
				else if(grade>=70 && grade<80)
			{
				cout<<"the grade is:'C'\n";
			}
				else if(grade>=60 && grade<70)
			{
				cout<<"the grade is:'D'\n";
			}
				else if(grade>=50 && grade<60)
			{
				cout<<"the grade is:'F'\n";
			}
			else cout<<"your are sediment \n";
			break;
			goto tran;
			case 3:
			cout<<"Enter 3 number \n";
			int a,s,d;
			cin>>a>>s>>d;
			cout<<"the smiller one is : "<<min(a,min(s,d));
				break;
			 case 4:
				cout<<"enter the your age? \n";
				int age;
				cin>>age;
				if(age>18)
				cout<<"you entered the vote with us";
				else
				 cout<<"not you entered the vote with us";
				break;
				case 5:

					double x,y,result;
					char z;

					cout<<"enter x,y please \n";
					cin>>x>>y;

					cout<<"chooes one please (*,/,+,-)\n";
					cin>>z;
				switch(z)
				{
				case '*':
					result=x*y;

					cout<<"Result is : "<<result<<endl;
					break;
					case '/':
						result=x/y;
						cout<<"Result is : "<<result<<endl;
					break;
						case '+':
							result=x+y;
						cout<<"result is : "<<result<<endl;
					break;
					case '-':
							
						result=x-y;
						cout<<"result is : "<<result<<endl;

						break;
					}
	case 6:
			cout<<"enter one day  ";
		
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
			}
}
}


