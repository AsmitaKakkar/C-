//*************ARRAYS**************


#include<iostream>
#include<iomanip>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>
using namespace std;
int main()
{
	int arr[5],i;
	cout<<"Enter values: ";
	
	for(i=0;i<=4;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<=4;i++)
	{
		cout<<"value of arr["<<i<<"] is: "<<arr[i]<<endl;
	}
	return 0;
}
