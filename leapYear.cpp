//***********TO CHECK A YEAR IS A LEAP YEAR OR NOT **********


#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main()
{
	int year,isleap=false;
	cout<<"Enter year to check:"<<ends;
	cin>>year;
	
	if(year%4==0)
		isleap=true;
	if(year%100==0)
		{
			if(year%400==0)
			isleap=true;
		}
	
	if(isleap)
	{
		cout<<year<<ends<<"is a leap year!!"<<endl;
	}
	else
	{
		cout<<year<<ends<<"is not a leap year!!"<<endl;
	}
	return 0;
}
