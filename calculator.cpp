//*******SIMPLE CALCULATOR***********


#include<iostream>
#include<conio.h>
using namespace std;

void printmenu()
{
	system("cls");
	cout<<"1. addition"<<endl;
	cout<<"2. substraction"<<endl;
	cout<<"3. multiplication"<<endl;
	cout<<"4. division"<<endl;
	cout<<"5. modolu"<<endl;
	cout<<"6. exit"<<endl;
	
}
int main()
{
	do
	{
		printmenu();
		int choice,a,b,sum;
		cout<<"Enter your choice:";
		cin>>choice;
		
		switch(choice)
		{
		case 1:
			{
				cout<<"Enter two numbers:";
				cin>>a>>b;
				
				cout<<"sum="<<a+b<<endl;
				cout<<"Press any key to continue.....";
				getch();
				break;				
			}
		case 2:
			{
				cout<<"Enter two numbers:";
				cin>>a>>b;
				
				int difference;
				cout<<"difference="<<a-b<<endl;
				cout<<"Press any key to continue......";
				getch();
				break;
			}
		case 3:
			{
			
				cout<<"Enter two numbers:";
				cin>>a>>b;
				
				cout<<"result="<<a*b<<endl;
				cout<<"Press any key to continue....";
				getch();
				break;
			}
		case 4:
			{	
			
				cout<<"Enter two numbers:";
				cin>>a>>b;
				
				cout<<"result="<<a/b<<endl;
				cout<<"Press any key to continue.....";
				getch();
				break;
				
			}
		case 5:
			{
				cout<<"Enter two numbers:";
				cin>>a>>b;
				
				cout<<"result="<<a%b<<endl;
				cout<<"Press any key to continue......";
				getch();
				break;
								
			}
		case 6:
			{
				exit(1);
			}
		default:
		{
			cout<<"ERROR!!Wrong choice!!"<<endl;
			cout<<"Please select correct option!!"<<endl;
			cout<<"Press any key to continue.....";
			getch();
			
		}
		}
		
	}
	while(1);
	
	
	return 0;
}
