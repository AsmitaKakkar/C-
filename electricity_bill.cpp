//****************ELECTRICITY BILL**************


#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int units;
	float bill;
	cout<<"Enter the units of electricity used:";
	cin>>units;
	
	if(units<500)
	{
		bill=400;
	}
	else if(units>=500 && units<1000)
	{
		bill=2*units;
	}
	else if(units>=1000 && units<1500)
	{
		bill=2.5*units;
	}
	else if(units>=1500 && units<2000)
	{
		bill=3.5*units;
	}
	else
	{
		bill=5*units;
	}
	
	cout<<"BILL->"<<bill;
	
	return 0;
}
