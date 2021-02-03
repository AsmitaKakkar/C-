//************PATTERN************


#include<iostream>
#include<iomanip>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<math.h>
using namespace std;
int main()
{
	int num,i,j;
	cout<<"Enter Limit:"<<ends;
	cin>>num;
	for(i=1;i<=num;i++)
	{
		for(j=num+1-i;j>0;j--)
		{
			cout<<" * ";
		}
		//for(j=i;j<=num;j++)
		//{
		//	cout<<" * ";
		//}
		cout<<endl;
	}
	
	
	return 0;
}
