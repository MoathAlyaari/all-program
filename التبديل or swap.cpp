#include <iostream>
using namespace std;
void swap(int &x,int &Z);
int main()
{
      int i=10,j=5;
	swap(i,j);
	cout<<"i becomes "<<i<<endl;
	cout<<"j becomes "<<j<<endl;
}
void swap(int &x,int &Z)
{
	int temp;
	temp=x;
	x=Z;
	Z=temp;
	
}

	
