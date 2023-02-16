#include<iostream>
using namespace std;


int main(){
	char b;
	do{
	int gul[5];
	cout<<"Please Enter Five Numbers in an Array : "<<endl;
	for(int i=0; i<5; i++){
	cin>>gul[i];
	}
	
	
	cout<<"The Array You Entered is : "<<endl;
	for(int i=0; i<5; i++){
	cout<<gul[i]<<" ";
	}
	
	
	
	int countevenno=0;
    int countoddno=0;
	for(int i=0; i<5; i++)
	if(gul[i]%2==0){
		countevenno++;
	}
	else 
	countoddno++;
	
	cout<<"\nTotal Even No. :"<<countevenno;
	cout<<"\nTotal Odd No.  :"<<countoddno;
	
		
	cout<<"\nPress a To Again Compile the Program OR Press any Key To Quit"<<endl;
	cin>>b;
	}while(b=='a');
	
	
	cout<<"*********************"<<endl;
	cout<<"Thanks For Compiling"<<endl;
	cout<<"*********************"<<endl;
	
	
	return 0;
}