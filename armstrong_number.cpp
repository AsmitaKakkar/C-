//***************TO CHECK A NUMBER IS ARMSTRONG OR NOT**********


#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<iomanip>
#include<time.h>
#include<string.h>
#include<math.h>
using namespace std;
int main()
{
	int num,rem,orig_no,arm_no;
	cout<<"Enter any three digit number:"<<ends;
	cin>>num;
	orig_no=num;
	
	while(num!=0)
	{
		rem=num%10;
		arm_no+=pow(rem,3);
		num=num/10;
	}
	
	if(arm_no==orig_no)
	{
		cout<<orig_no<<ends<<"is an armstrong number!!"<<endl;
	
	}
	else
	{
		cout<<orig_no<<ends<<"is not an armstrong number!!"<<endl;
		
	}
	
	return 0;
}
