//**********TO CHECK WHICH NUMBER IS SMALLER AND WHICH IS LARGER AMONG THE THREE**********


#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n1,n2,n3;
	cout<<"Enter three numbers:"<<endl;
	cin>>n1>>n2>>n3;
	
	int max=0,min=0;

	if((n2>=n1) && (n2>=n3))
	{
		max=n2;
	}
	else if((n3>=n1) && (n3>=n2))
	{
		max=n3;
	}
	else
	{
		max=n1;
	}
	cout<<"Maximum Number:"<<max;
	
		if((n2<=n1) && (n2<=n3))
	{
		min=n2;
	}
	else if ((n3<=n1) && (n3<=n2))
	{
		min=n3;
	}
	else
	{
		min=n1;
	}
	cout<<endl<<"Minimum Number:"<<min;
	
	
	return 0;

}
