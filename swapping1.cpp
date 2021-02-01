//**************SWAPPING TWO NUMBERS WITHOUT THIRD VARIABLE*************


#include<iostream>
#include<conio.h>
#include<string.h>
#include<math.h>
using namespace std;
int main()
{
	int num1,num2;
	cout<<"Enter two numbers:";
	cin>>num1>>num2;
	cout<<"Before Swapping:"<<endl<<"num1->"<<num1<<ends<<"num2->"<<num2<<endl;
	num1=num1+num2;
	num2=num1-num2;
	num1=num1-num2;
	cout<<"After swapping:"<<endl<<"num1->"<<num1<<ends<<"num2->"<<num2<<endl;
	
	return 0;
}
