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
	
	int i,j,k;
	for (i = 0; i <5; i++)
    {
    for (j = i+1; j<5; j++)
	{
    if (gul[i]<gul[j])
    {
     k = gul[i];
    gul[i] = gul[j];
    gul[j] = k;
     }
	}
    }
    
    
    cout << "\nSecond Largest No. in The Array Is  : " <<gul[1]<<endl;
    
	
	cout<<"Press a To Again Compile the Program OR Press any Key To Quit"<<endl;
	cin>>b;
	}while(b=='a');
	
	
	cout<<"*********************"<<endl;
	cout<<"Thanks For Compiling"<<endl;
	cout<<"*********************"<<endl;
	
	
	return 0;
}
