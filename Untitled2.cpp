#include<iostream>
using namespace std;

class recangler{
	private:
		float length;
		float width;
		public:
		void setlength(float l) {
			if(l>=0) 
			length=l;
			else {
				cout<<"Enter please enter only positive values "; 
			}
			float getlength() 
			{
				return length; 
			}
			
		} 
		void setwidth(float w) {
			if(w>=0) 
			width=w;
			else {
				cout<<"Enter please enter only positive values "; 
			}
			float getwidth() 
			{
				return width ; 
			}
			float getarea()
			{
				return length*width
			}
			  
		};
int main() { 
recangler box; 
box.setlength(40.4);
box.setwidth(30.6);
cout<<"thr rectangle area is "<<box.getarea() <<endl;
 

	 


return 0;

} 










