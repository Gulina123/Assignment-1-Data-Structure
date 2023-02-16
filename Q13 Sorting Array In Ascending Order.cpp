#include<iostream>
using namespace std;


int main(){
	char b;
	do{
	int i,j,temp;
	int gul[5];
	cout<<"Enter Five Values in an Array : "<<endl;
	for(int i=0; i<5; i++){
	cin>>gul[i];
	}
	
	
	cout<<"The Array You Entered is : "<<endl;
	for(int i=0; i<5; i++){
	cout<<gul[i]<<" ";
	}
	
	

    
    for(i=0; i<5; i++){
    for(j=i+1; j<5; j++){
	if(gul[j] < gul[i])
	{
	temp = gul[i];
    gul[i] = gul[j];
    gul[j] = temp;
     }
    }
    }


    cout<<"\nArray in Ascending Order:"<<endl;
    for(i=0; i<5; i++)
    {
        cout<<gul[i]<<endl;
    }
	cout<<"\nPress a To Again Compile the Program OR Press any Key To Quit"<<endl;
	cin>>b;
	}while(b=='a');
	
	
	
	cout<<"********************"<<endl;
	cout<<"Thanks For Compiling"<<endl;
	cout<<"*********************"<<endl;
	
	
	return 0;
}