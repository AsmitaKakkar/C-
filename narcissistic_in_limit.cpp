//**********NARCISSISTIC NUMBERS BETWEEN TWO INTERVALS**********


#include<iostream>
#include<iomanip>
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<math.h>
#include<time.h>
using namespace std;
int main()
{
	int low,high,num,orig_no,new_no,i,n,rem,count,expo;
	cout<<"Enter two numbers(Limit):";
	cin>>low>>high;
	cout<<"Narcissistic numbers between "<<low<<" "<<"and "<<high<<" are : ";
	
	for(i=low;i<=high;i++)
	{
		num=i;
		orig_no=i,count=0;
		
		while(num!=0)
		{
			num=num/10;
			count++;
		}
		expo=count;

		orig_no=i;
		n=i;
		new_no=0;
		rem=0;
		while(n!=0)
		{
			rem=n%10;
			new_no=new_no+pow(rem,expo);
			n=n/10;
		}
		
		if(orig_no==new_no)
		{
			cout<<orig_no;
			cout<<" ";
		}
			
	}
	
	
	
	return 0;
}
