#include<iostream>
using namespace std;
int main() {
	int choice;
	for(int r=0;r<3;r++) {
 cout << "\n  \n Select an option: \n";
    cout << "1. Print array elements in reverse order\n";
    cout << "2. Print the smallest number in an array\n";
    cout << "3. Print your full name\n";
    cout << "Enter your choice (1-3): ";
    cin>>choice;
    switch(choice) { 
     case 1: {
            int n;
            int arr[]={1,2,3,4};
            for (int i = 4; i>=1; i--) {
                cout<<i; }
	}break;
	case 2:{
		int arr[]={20,30,40};
		cout<<"the smallest number is : "<<min(arr[0],min(arr[1],arr[2]))<<"\n";	
	}break;
	case 3:{
		char Name[12]={'m','o','a','t','h','A','l','y','a','a','i','\0'}; 
		for(int i=0;i<12;i++) {
			cout<<Name[i];
		}
    
	
	
	
    }
  }
}
}
