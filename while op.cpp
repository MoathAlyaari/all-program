#include <iostream>
using namespace std;

int main() {
	
int x,op,y,m,a,i=1;
while (i<=5){

cout<<"\n enter choice 1...2...3...4 \n ";
cout<<"1.y+3*x*5\n";
cout<<"2.x-y*(m/7)\n";
cout<<"3.a/=5\n";
cin>>op;
switch(op) {
	case 1:
		cout<<"enter x,y\n";
		cin>>x>>y;
		cout<<"y+3*x*5"<<y+3*x*5;
		break;
		case 2:
			cout<<"enter x,y,m \n";
			cin>>x>>y>>m;
			cout<<"x-y*(m/7)="<<x-y*(m/7);
			break;
			case 3:
				cout<<"enter a\n";
				cin>>a;
				a/=5;
				cout<<"a/=5="<<a;
				break;
				default :cout<<"try again";
		}
		i++;
	}
	}
		


