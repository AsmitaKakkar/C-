//****************SWAPPING TWO NUMBERS WITH THE HELP OF THIRD VARIABLE***************


#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num1,num2,temp;
	cout<<"Enter any two numbers:";
	cin>>num1>>num2;
	cout<<"Before Swapping:"<<endl<<"num1->"<<num1<<ends<<"num2->"<<num2<<endl;
	temp=num1;
	num1=num2;
	num2=temp;
	cout<<"After Swapping:"<<endl<<"num1->"<<num1<<ends<<"num2->"<<num2<<endl;
	
	return 0;
}
