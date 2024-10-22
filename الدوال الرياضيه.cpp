#include <iostream>
#include<cmath>
using namespace std;
int main()
{   	    int x,c,v,op,z,g;
for(int i=0;i<=16;i++)
{


         cout<<"  -1 enter the number case 1:there is the largeast and smaller 2 number \n";
                  cout<<" -2 enter the number case 2:there is the smaller and largeast 3 number \n";
                  cout<<"-3 enter the number case 3: thete is the smaller and largeast 4 number \n";
cin>>op;
switch(op)
  {
  	case 1:
         cout<<"enter 2 number \n";
         cin>>x>>c;
         cout<<"the beger "<<max(x,c)<<endl;
         cout<<"the number smaller is "<<min(x,c)<<endl;

         break;
      case 2:
      	      cout<<"enter 3 number \n";
              cin>>z>>g>>c;
              cout<< "the numpers beger "<<max(g,max(z,c))<<endl;
              cout<<"the number smaller "<<min(g,min(z,c))<<endl;
      
	   break;
	   case 3:
	   	      cout<<"enter 4 number there is the smaller number \n";
              cin>>z>>g>>c>>v;
              cout<< "the numpers smaller "<<min(g,min(z,min(c,v)))<<endl;
              cout<< "the numpers bagar is "<<max(g,max(z,max(c,v)))<<endl;
            break;
            
            
            

    }
}
	
	
}


