
#include<iostream>
using namespace std;


int main(){
	char op;
	do{
		
		// main menu 
	cout<<"*******************"<<endl;
	cout<<"Q No.11"<<endl;
	cout<<"Q No.12"<<endl;
	cout<<"Q No.13"<<endl;
	cout<<"Q No.14"<<endl;
	cout<<"Q No.15"<<endl;
	cout<<"Q No.16"<<endl;
	cout<<"Q No.17"<<endl;
	cout<<"Q No.18"<<endl;
	cout<<"Q No.19"<<endl;
	cout<<"20.Quit"<<endl;
	cout<<"**********************"<<endl;
	
	int num1;
	cout<<"**************************************"<<endl;
	cout<<"Enter Question No. To Run The Program"<<endl;
	cout<<"*************************************"<<endl;
	cin>>num1;
	
	
	switch(num1){
		case 11:
	{
		// separating even and odd
	cout<<"Q.11 To Separate Odd & Even"<<endl;
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
	
	
	cout<<"\nOdd Numbers From The Above Array :"<<endl;;
	for(int i=0; i<5; i++)
	if(gul[i]%2!=0)
	cout<<gul[i]<<" ";
	
	
	cout<<"\nEven Numbers From The Above Array :"<<endl;;
	for(int i=0; i<5; i++)
	if(gul[i]%2==0)
	cout<<gul[i]<<" ";
	
	cout<<endl; 
break;
}
		
	case 12: 
	{
	// counting even and odd
	cout<<"Q.12 Count Even & Odd No."<<endl;
	cout<<endl;
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
	cout<<endl;
	break;
	}
		
		
	case 13:
		{
     // ascending
	cout<<"Q.13 To Sort Array In Ascending Order"<<endl;
	cout<<endl;
		
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
	break;
	
	}
		
	
	
	case 14:
		{
			// Descending 

	cout<<"Q.14 To Sort Array In Descending Order"<<endl;
	cout<<endl;	

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
	if(gul[j] > gul[i])
	{
	temp = gul[i];
    gul[i] = gul[j];
    gul[j] = temp;
     }
    }
    }


    cout<<"\nArray in Descending Order:"<<endl;
    for(i=0; i<5; i++)
    {
        cout<<gul[i]<<endl;
    }
	break;
}
	
	
	case 15:
		{
    // Second Smallest
	cout<<"Q.15 To Print 2 nd Smallest No"<<endl;
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
	
	int i,j,k;
	for (i = 0; i <5; i++)
    {
    for (j = i+1; j<5; j++)
	{
    if (gul[i]>gul[j])
    {
     k = gul[i];
    gul[i] = gul[j];
    gul[j] = k;
     }
	}
    }
    
    cout << "\nSecond Smallest No. in The Array Is  : " <<gul[1]<<endl;
    
	cout<<endl;
	break;
	
	
    }   
	
	case 16:
		{
	// Second largest
	cout<<"Q.15 To Print 2 nd Largest"<<endl;
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
    
	
	cout<<endl;
	break;
	}
	
	case 17:
	{
		// Similarity
	cout<<"Q.17 To Check Similarity of Two Arrays"<<endl;
	cout<<endl;
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

	cout<<endl;

	break;
	
	}
	
	
	
	case 18:
		
	{
		// Merging
	cout<<"Q.18 To Merge Two Arrays "<<endl;
	cout<<endl;
	
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
	break;
	}
	
	case 19:
	{
		// max difference
	cout<<"Q.19 To Show Maximum Difference"<<endl;
	cout<<endl;

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
    break;
	}
	case 20:
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