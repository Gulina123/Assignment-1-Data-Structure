
#include<iostream>
using namespace std;


int main(){
	char op;
	do{
		
		// main menu 
	cout<<"*******************"<<endl;
	cout<<"Q No.1"<<endl;
	cout<<"Q No.2"<<endl;
	cout<<"Q No.3"<<endl;
	cout<<"Q No.4"<<endl;
	cout<<"Q No.5"<<endl;
	cout<<"Q No.6"<<endl;
	cout<<"Q No.7"<<endl;
	cout<<"Q No.8"<<endl;
	cout<<"Q No.9"<<endl;
	cout<<"10.Quit"<<endl;
	cout<<"**********************"<<endl;
	
	int num1;
	cout<<"**************************************"<<endl;
	cout<<"Enter Question No. To Run The Program"<<endl;
	cout<<"*************************************"<<endl;
	cin>>num1;
	
	
	switch(num1){
		
		case 1: 
	{
		
		// minimum num
	int gul[5];
	cout<<"Enter Five Values in an Array : "<<endl;
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
	break;
     }
	
	case 2: 
	{
	// maximum
	cout<<"Question No.2 To Print Maximum No. In Array"<<endl;
	cout<<endl;
	int gul[5];
	cout<<"Enter Five Values in an Array : "<<endl;
	for(int i=0; i<5; i++){
	cin>>gul[i];
	}
	
	
	cout<<"The Array You Entered is : "<<endl;
	for(int i=0; i<5; i++){
	cout<<gul[i]<<" ";
	}
	
	
	int min=gul[0];
	for(int i=0; i<5; i++){
	if (min<gul[i]){
		min=gul[i];
	}
	}
	
	
	cout<<"\nThe Maximum Number in the Given Array is : "<<min<<endl;
	
	break;
		
	}
		
		
	case 3:
		{
// No Presence
	cout<<"Question No.3 To check The  No. Is Present Or Not In Array"<<endl;
	cout<<endl;
		
	int gul[5];
	cout<<"Enter Five Values in an Array : "<<endl;
	for(int i=0; i<5; i++){
	cin>>gul[i];
	}
	
	
	cout<<"The Array You Entered is : "<<endl;
	for(int i=0; i<5; i++){
	cout<<gul[i]<<" ";
	}
	
	bool flag;
	int no;
	cout<<"\nPlease Enter The Number To Check Is It Present In The Above Array Or Not:"<<endl;
	cin>>no;
	
	for(int i=0; i<5; i++){
	if(no==gul[i])
		flag++;
	}
    if (flag==1)
    	cout<<"Number Is Present In The Above Array "<<endl;

	else 
		cout<<"Oops Not Found"<<endl;
	break;
	
	}
		
	
	
	case 4:
		{
			// counting No

	cout<<"Question No.4 To check how many Times  No. Appears"<<endl;
	cout<<endl;	
	int gul[5];
	cout<<"Enter Five Values in an Array : "<<endl;
	for(int i=0; i<5; i++){
	cin>>gul[i];
	}
	
	
	cout<<"The Array You Entered is : "<<endl;
	for(int i=0; i<5; i++){
	cout<<gul[i]<<" ";
	}
	
	
	int no;
	cout<<"\nEnter Number To Count Its Appearence:"<<endl;
	cin>>no;
	int count=0;
	for(int i=0; i<5; i++)
	if(no==gul[i]){
		count++;
	}
	cout<<no<<" Appears "<<count<<" Times In The Given Array "<<endl;
	
	break;
}
	
	
	case 5:
		{
    // Printing Odd No.
	cout<<"Question No.5 To Print Odd Numbers"<<endl;
	cout<<endl;
	
	int gul[5];
	cout<<"Enter Five Values in an Array : "<<endl;
	for(int i=0; i<5; i++){
	cin>>gul[i];
	}
	
	
	cout<<"The Array You Entered is : "<<endl;
	for(int i=0; i<5; i++){
	cout<<gul[i]<<" ";
	}
	
	
	cout<<"\nOdd Numbers In The Above Array :";
	for(int i=0; i<5; i++)
	if(gul[i]%2!=0)
	cout<<gul[i]<<" ";
	
	cout<<endl;
	break;
	
	
    }   
	
	case 6:
		{
			// Printing Even
	cout<<"Question No.5 To Print Even Numbers"<<endl;
	cout<<endl;
	int gul[5];
	cout<<"Enter Five Values in an Array : "<<endl;
	for(int i=0; i<5; i++){
	cin>>gul[i];
	}
	
	
	cout<<"The Array You Entered is : "<<endl;
	for(int i=0; i<5; i++){
	cout<<gul[i]<<" ";
	}
	
	
	cout<<"\nEven Numbers In The Above Array :";
	for(int i=0; i<5; i++)
	if(gul[i]%2==0)
	cout<<gul[i]<<" ";
	
	cout<<endl;
	break;
	}
	
	case 7:
	{
		// Sum Of Array
	cout<<"Question No.7 To Find Sum od All Array Elements"<<endl;
	cout<<endl;
	
	
		int gul[5];
	cout<<"Enter Five Values in an Array : "<<endl;
	for(int i=0; i<5; i++){
	cin>>gul[i];
	}
	
	
	cout<<"The Array You Entered is : "<<endl;
	for(int i=0; i<5; i++){
	cout<<gul[i]<<" ";
	}
	
	int sum=0;
	cout<<"\nThe Sum Of Array Elements is : ";
	
	for(int i=0; i<5; i++){
		sum= sum + gul[i];
	}
	
	cout<<sum<<endl;
	break;
	
	}
	
	
	
	case 8:
		
	{
		// Reversing Array
	cout<<"Question No.8 To Reverse an Array"<<endl;
	cout<<endl;
	
		int gul[5];
	cout<<"Enter Five values in an Array : "<<endl;
	for(int i=0; i<5; i++){
	cin>>gul[i];
	}
	
	
	cout<<"The Array You Entered is : "<<endl;
	for(int i=0; i<5; i++){
	cout<<gul[i]<<" ";
	}
	cout<<"\nThe Reverse of Array is "<<endl;
	for(int i=5-1; i>=0; i--){
	
cout<<gul[i]<<" ";
}
	cout<<endl;
	break;
	}
	
	case 9:{
	cout<<"Question No.9 To Find Unique Elements in Array"<<endl;
	cout<<endl;
	int gul[5];
	int i,j;
	cout<<"Enter Five Values in an Array : "<<endl;
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
	
	cout<<endl;
	break;
}
	
	case 10:
	{
	cout<<"*********************"<<endl;
	cout<<"Thanks For Compiling"<<endl;
	cout<<"*********************"<<endl;
	exit (0);
	break;
	}
	
	
	default:
	cout<<"Sorry Inavalid Question No."<<endl;
	
	}
	
	cout<<"\nPress a To Again Compile the Program OR Press any Key To Quit "<<endl;
	cin>>op;
	cout<<"*********************"<<endl;
	cout<<"Thanks For Compiling"<<endl;
	cout<<"*********************"<<endl;
		
	}while(op=='a');
	
		

	return 0;
}