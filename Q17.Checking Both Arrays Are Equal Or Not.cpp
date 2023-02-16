#include<iostream>
using namespace std;


int main(){
	char b;
	do{
	int i,j,k;
	int tempno1,tempno2;
	int gul1[5];
	int gul2[5];
	cout<<"Enter Five Values in 1 st Array : "<<endl;
	for(int i=0; i<5; i++){
	cin>>gul1[i];
	}
	cout<<"\nThe First Array You Entered is : "<<endl;
	for(int i=0; i<5; i++){
	cout<<gul1[i]<<" ";
	}
	
    cout<<"\nEnter Five Numbers in  2 nd Array : "<<endl;
	for(int k=0; k<5; k++){
	cin>>gul2[k];
	}
	
	
	cout<<"\nThe Second Array You Entered is : "<<endl;
	for(int k=0; k<5; k++){
	cout<<gul2[k]<<" ";
	}
    
   	int count=0;
	for (int i= 0;i<5; i++)
	{
		if (gul1[i] != gul2[i])
		{
			count++;
			break;
		}
	}
	if (count != 0) {
		cout << "\nBoth Arrays Are Not  Same" << endl;
	}
	else {
		cout << "\nBoth Arrays Are  Same" << endl;
	}


	cout<<"\nPress a To Again Compile the Program OR Press any Key To Quit "<<endl;
	cin>>b;
	}while(b=='a');
	
	
	
	cout<<"********************"<<endl;
	cout<<"Thanks For Compiling"<<endl;
	cout<<"********************"<<endl;
	
	
	return 0;
}