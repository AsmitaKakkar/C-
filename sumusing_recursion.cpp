//***************SUM OF N NATURAL NUMBERS USING RECURSION***********


#include<iostream>
#include<iomanip>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
using namespace std;

int add(int n);

int main()
{
	int n;
	cout<<"Enter Limit:"<<ends;
	cin>>n;
	
	cout<<"SUM="<<add(n);
	
	return 0;
}

int add(int n)
{
	while(n!=0)
	return n+add(n-1);
	
}
