#include<iostream>
using namespace std;


int main(){
	char b;
	do{
	int i,j;
	int t;
	int gul[5];
	cout<<"Enter 5  Numbers in an Array : "<<endl;
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
	t = gul[i];
    gul[i] = gul[j];
    gul[j] = t;
     }
    }
    }


    cout<<"\nElements of Array in Ascending Order:"<<endl;
    for(i=0; i<5; i++)
    {
        cout<<gul[i]<<endl;
    }
    
    int diff;
     i=0; j=4;
    diff=gul[j]-gul[i];
    cout<<"\nMax Difference Is :"<<diff<<endl;
    
    
	cout<<"\nPress a To Again Compile the Program OR Press any Key To Quit"<<endl;
	cin>>b;
	}while(b=='a');
	
	
	cout<<"********************"<<endl;
	cout<<"Thanks For Compiling"<<endl;
	cout<<"********************"<<endl;
	
	
	return 0;
}