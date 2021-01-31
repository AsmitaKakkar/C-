//********************PALINDROME NUMBER***********************


#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num,rev=0,original_num,rem,reversed_num;
	cout<<"Enter any number:";
	cin>>num;
	original_num=num;
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	reversed_num=rev;
	if(original_num==reversed_num)
	{
		cout<<"This is a palindrome number!!"<<endl;
	}
	else
	{
		cout<<"This is not a palindrome number!!"<<endl;
	}
	return 0;
}
