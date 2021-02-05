//**********continue statement***********


#include<iostream>
using namespace std;
int main()
{
	int num=20;
	while(num>=10)
	{
		if(num==12||num==18)
		{
			num--;
			continue;
		}
		cout<<"Value of i="<<ends<<num<<endl;
		num--;
	}
	return 0;
}
