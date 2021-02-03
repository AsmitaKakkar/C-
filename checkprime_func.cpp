//****************CHECK WEATHER THE NUMBER IS PRIME OR NOT USING FUNCTIONS************


#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<iomanip>
#include<time.h>
#include<math.h>
using namespace std;

int isprime(int num)
{
	int flag=1,i;
	
	if(num==0 || num==1)
	{
		flag=0;
	}
	else
	{
		for(i=2;i<=num/2;i++)
	{
		if(num%i==0)
		{
			flag=0;
			break;
		}
	}
	
	}
	return flag;
	
}


int main()
{
	int flag=1,i,num;
	cout<<"Enter Number:";
	cin>>num;
	
	isprime(num);
	if(isprime(num)==1)
	{
		cout<<num<<" is a prime number!!"<<endl;
	}
	else
	{
		cout<<num<<" is not a prime number!!"<<endl;
	}
	
	return 0;
	
}
