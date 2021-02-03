//*************FACTORIAL OF N NUMBERS USING RECURSION***********


#include<iostream>
#include<iomanip>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
using namespace std;

int fact(int n);

int main()
{
	int n;
	cout<<"Enter Limit:"<<ends;
	cin>>n;
	
	cout<<"Factorial of "<<n<<" is : "<<fact(n);
	
	return 0;
}

int fact (int n)
{
	while (n!=1)
	
	return n*fact(n-1);
}
