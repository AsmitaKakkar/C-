//************EXAMPLE OF INDIRECT FUNCTION**********


#include<iostream>
#include<iomanip>
#include<time.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
int fa(int);
int fb(int);

int fa(int num)
{
	if(num<=1)
	{
		return 1;
	}
	else
	{
		return num*fb(num-1);
	}
}

int fb(int num)
{
	if(num<=1)
	{
		return 1;
		
	}
	else
	{
		return num*fa(num-1);
	}
}

int main()
{
	int num=5;
	cout<<fa(num);
	return 0;
}
