//*************EVEN OR ODD NUMBER**********


#include<iostream>
using namespace std;

void printmenu()
{
	cout<<"\t\tSTATUS\t\t<<endl;
	cout<<"1. check number"<<endl;
	cout<<"2. exit"<<endl;
}


int main()
{
	do
	{
		int choice;
		printmenu();
		cout<<"Enter choice:";
		cin>>choice;
		
		switch(choice)
		{
			case 1:
				{
					int num,limit,i;
					cout<<"Enter Number:";
					cin>>num;
					if(num%2==0)
					cout<<"Number is EVEN"<<endl;
					else
					cout<<"Number is ODD"<<endl;
					break;
				}
			case 2:
				{
					exit(1);
				}
			default:
				{
					cout<<"ERROR!!"<<endl<<"Enter correct choice!!"<<endl;
				}
		}
	
	}
	while(1);

	return 0;
}
