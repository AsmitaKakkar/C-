//**************TO FIND THE FACTORIAL OF A NUMBER*************


#include<conio.h>
using namespace std;
int main()
{
	int i,n,fact=1;
	cout<<"Enter Limit:"<<endl;
	cin>>n;
	if(n<0)
	{
		cout<<"ERROR!! factorial of negative number is not possible!!"<<endl;
	}
	else
	{
		for(i=1;i<=n;i++)
		{
			fact*=i;
		}
	}
	cout<<"Factorial of "<<n<<" is ->"<<fact;
	
	return 0;
}
