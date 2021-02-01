//***********TO DISPLAY PRIME NUMBERS BETWEEN TWO INTERVALS***********


#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<iomanip>
#include<time.h>
using namespace std;
int main()
{
    int low,high,i,flag;
    cout<<"Enter two numbers(limits):"<<ends;
    cin>>low>>high;
    cout<<"Prime Numbers between "<<" "<<low<<"and"<<" "<<high<<"are:"<<endl;
    
    while(low<high)
    {
    	flag=0;
    	if(low==0 || low==1)
    	{
    		flag=1;
		}
		else
		{
			for(i=2;i<=low/2;i++)
			{
				if(low%i==0)
				{
					flag=1;
					break;
				}
			}
		}
		if(flag==0)
		{
			cout<<low<<ends;
			
		}
		low++;
	}
    
    return 0;
}
