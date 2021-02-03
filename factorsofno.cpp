
//****************TO FIND ALL THE FACTORS OF A NUMBER**************


#include<iostream>
#include<iomanip>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>
using namespace std;
int main()
{
	int num,i;
	cout<<"Enter any number:"<<ends;
	cin>>num;
	cout<<"Factors of "<<num<< " is "<<ends;
	
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			cout<<i<<" ";

		}
		
	}
	
	return 0;	
}
