//*************NARCISSISTIC NUMBER************

#include<iostream>
#include<iomanip>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
using namespace std;
int main()
{
	int num,expo,n,rem,count=0,orig_no,new_no=0;
	cout<<"Enter any number:";
	cin>>num;
	
	orig_no=num;
	
	while(num!=0)
	{
		num=num/10;
		count++;
	}
	expo=count;
	
	n=orig_no;
	
	while(n!=0)
	{
		rem=n%10;
		new_no=new_no+pow(rem,expo);
		n=n/10;
	}
	if(new_no==orig_no)
	{
		cout<<orig_no<<" is a narccistic number!!"<<endl;
	}
	else
	{
		cout<<orig_no<<" is not a narccistic number!!"<<endl;
	}
	
	
	return 0;
	
}
