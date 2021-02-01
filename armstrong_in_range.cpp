//************DISPLAY ARMSTRONG NUMBERS BETWEEN TWO INTERVALS*************


#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<iomanip>
using namespace std;
int main()
{
	int low,high,orig_no,arm_no,i,num,rem;
	cout<<"Enter two numbers(interval):"<<ends;
	cin>>low>>high;
	cout<<"Armstrong Numbers between "<<low<<" and "<<high<<" are :"<<endl;
	
	for(i=low;i<=high;i++)
	{
		arm_no=0;
		orig_no=i;
		num=i;
		while(num!=0)
		{
			rem=num%10;
			arm_no=arm_no+pow(rem,3);
			num=num/10;
		}
		if(orig_no==arm_no)
		{
			cout<<i<<" ";
		}
	
	}
	

	return 0;

}
