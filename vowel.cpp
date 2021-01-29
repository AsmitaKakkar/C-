//**********VOWEL OR CONSONENT***********


#include<iostream>
using namespace std;
int main()
{
	char alpha;
	cout<<"Enter the alphabet you want to check:";
	cin>>alpha;
	
	if(alpha=='a'||alpha=='e'||alpha=='i'||alpha=='o'||alpha=='u' || alpha=='A'||alpha=='E'||alpha=='I'||alpha=='O'||alpha=='U')
	
	{
		cout<<"This is a vowel!!"<<endl;
	}
	else
	{
		cout<<"This is a consonent!"<<endl;
	}
	
	return 0;
}
