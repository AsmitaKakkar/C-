//***************TO FIND THE LARGEST NUMBER**********************


#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n1,n2;
	cout<<"Enter two numbers:";
	cin>>n1>>n2;
	int max=n1;
	if(n2>max)
	{
		cout<<n2<<" is the largest number;";
		
	}
	else
	{
		cout<<n1<<" is the largest number;";
	}
	return 0;
}
