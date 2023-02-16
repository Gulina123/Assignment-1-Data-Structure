#include<iostream>
using namespace std;


int main(){
	char b;
	do{
	int gul[5];
	int i,j;
	cout<<"Please Enter Five Numbers in an Array : "<<endl;
	for(int i=0; i<5; i++){
	cin>>gul[i];
	}
	
	
	cout<<"\nThe Array You Entered is : "<<endl;
	for(int i=0; i<5; i++){
	cout<<gul[i]<<" ";
	}
	
	
	cout << "\n Unique Elements In  The Above Array is  "<<endl;
	int count;
	for (int i = 0; i < 5; i++)
	{
	count = 0;
	for (int j = 0; j < 5; j++)
	{
	if (i != j)
	{
	if (gul[i] == gul[j])
	{
	count++;
	}
	}
	}
	if (count == 0)
	{
	cout << "'"<<gul[i] << "'       ";
	}
	}
	
	

	cout<<"\nPress a To Again Run the Program OR Press any Key To Exit: "<<endl;
	cin>>b;
	}while(b=='a');
	
	
	cout<<"********************"<<endl;
	cout<<"Thanks For Compiling"<<endl;
	cout<<"*********************"<<endl;
	
	
	return 0;
}