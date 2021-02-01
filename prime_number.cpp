//************CHECK THE NUMBER IS PRIME OR NOT************


#include<iostream>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main()
{
	int num,i,isprime=true;
	cout<<"Enter the number to be checked:";
	cin>>num;
	if(num==0 || num==1)
	{
		isprime=false;
		
	}
	else
	{
		for(i=2;i<=num/2;i++)
		{
			if(num%i==0)
			{
				isprime=false;
				break;
			}
		}
	}
	
	if(isprime)
	{
		cout<<num<<ends<<"is a prime number!!"<<endl;
	}
	else
	{
		cout<<num<<ends<<"is not a prime number!!"<<endl;
	}
	return 0;
}
