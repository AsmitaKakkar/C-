//*****************PALINDROME STRING******************


#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
	int i,l,count=0;
	char str[50];
	cout<<"Enter any string:";
	cin>>str;
	//char str[]={"naman"};
	l=strlen(str);
	for(i=0;i<l;i++)
	{
		if(str[i]!=str[l-i-1])
		{
		count=1;
		break;
		}
	
	}
	if(count==1)
	{
		cout<<" String is not a palindrome!!";
		
	}
	else
	{
		cout<<"String is a palindrome!!";
		
	}

	return 0;
}
