//***************MULTIPLICATION  TABLE*************


#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num,i;
	cout<<"which number multiplication table you want to know?";
	cin>>num;
	cout<<"---------------------------------------------"<<endl;
	cout<<"**************Table of"<<num<<"**************"<<endl;
	cout<<"---------------------------------------------"<<endl;
	for(i=1;i<=10;i++)
	{
		cout<<num<<"\t"<<"*"<<"\t"<<i<<"\t"<<"="<<"\t"<<num*i<<endl;
	}
	
	return 0;
}
