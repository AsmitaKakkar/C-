//**************TO REVERSE A NUMBER*************


#include<iostream>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<time.h>
using namespace std;
int main()
{
	int num,rev=0,rem=0;
	cout<<"Enter any number:";
	cin>>num;
	cout<<"Original Number->"<<ends<<num<<endl;

	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
		
	}
	cout<<"Reversed Number->"<< rev<<endl;
	
	return 0;
}
