//*************FIBONACCI SERIES**********


#include<iostream>
#include<iomanip>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
using namespace std;
int main()
{
	int limit,i,t1=0,t2=1;
	cout<<"Enter Limit:"<<ends;
	cin>>limit;
	
	for(i=1;i<=limit;i++)
	{
		cout<<t1<<" ";
		int next=t1+t2;
		t1=t2;
		t2=next;
	}
	
	return 0;
}
