#include<iostream>
using namespace std;


int main(){
	char b;
	do{
	int gul[5];
	cout<<"Enter Five Vlaues in an Array : "<<endl;
	for(int i=0; i<5; i++){
	cin>>gul[i];
	}
	
	
	cout<<"The Array You Entered is : "<<endl;
	for(int i=0; i<5; i++){
	cout<<gul[i]<<" ";
	}
	
	
	int min=gul[0];
	for(int i=0; i<5; i++){
	if (min>gul[i]){
		min=gul[i];
	}
	}
	
	
	cout<<"\nThe Minimum Number in the Given Array is : "<<min<<endl;
	cout<<"Enter a To Again Complie the Program OR Enter any Key To Quit: "<<endl;
	cin>>b;
	}while(b=='a');
	
	
	cout<<"*********************"<<endl;
	cout<<"Thanks For Compiling "<<endl;
	cout<<"**********************"<<endl;
	
	
	return 0;
}