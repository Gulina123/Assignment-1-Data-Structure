#include<iostream>
using namespace std;


int main(){
	char b;
	do{
	int gul[5];
	cout<<"Enter Five Values in an Array : "<<endl;
	for(int i=0; i<5; i++){
	cin>>gul[i];
	}
	
	
	cout<<"The Array You Entered is : "<<endl;
	for(int i=0; i<5; i++){
	cout<<gul[i]<<" ";
	}
	
	
	cout<<"\nOdd Numbers From The Above Array :"<<endl;;
	for(int i=0; i<5; i++)
	if(gul[i]%2!=0)
	cout<<gul[i]<<" ";
	
	
	cout<<"\nEven Numbers From The Above Array :"<<endl;;
	for(int i=0; i<5; i++)
	if(gul[i]%2==0)
	cout<<gul[i]<<" ";
	
	
	
	cout<<"\nPress a To Again Compile the Program OR Press any Key To Quit"<<endl;
	cin>>b;
	}while(b=='a');
	
	
	cout<<"*********************"<<endl;
	cout<<"Thanks For Compiling"<<endl;
	cout<<"*********************"<<endl;
	
	
	return 0;
}