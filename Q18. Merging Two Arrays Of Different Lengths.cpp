#include<iostream>
using namespace std;


int main()
{
	
	char b;
	do{
    int gul1[100], gul2[100], gulm[100];
	int s1, s2;
	int  i, k;
	
    cout<<"Enter the Size of 1 st Array: "<<endl;;
    cin>>s1;
    cout<<"Enter "<<s1<<" Elements for 1 st Array: "<<endl;
    for(i=0; i<s1; i++)
    {
    cin>>gul1[i];
    gulm[i] = gul1[i];
    }
	k = i;
    
    cout<<"\nEnter the Size Of 2 nd Array: "<<endl;
    cin>>s2;
    cout<<"Enter "<<s2<<" Elements for 2 nd Array: "<<endl;
    for(i=0; i<s2; i++)
    {
	cin>>gul2[i];
    gulm[k] = gul2[i];
    k++;
    }
    
    
    
    cout<<"\nThe Merged Array :"<<endl;
    for(i=0; i<k; i++)
    cout<<gulm[i]<<" ";
    cout<<endl;
    
    
    
	cout<<"\nPress a To Again Compile the Program OR Press any Key To Quit"<<endl;
	cin>>b;
	}while(b=='a');
	
	
	cout<<"********************"<<endl;
	cout<<"Thanks For Compiling"<<endl;
	cout<<"********************"<<endl;
	
	
    return 0;
}