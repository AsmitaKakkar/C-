//****************FIND THE SOLUTIONS OF THE QUADRATIC EQUATION*********************


#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
using namespace std;
int main()
{
	float a,b,c,x1,x2,discriminant=0,real_part,imaginary_part;
	cout<<"Enter the value of the cofficients a,b and c:"<<endl;
	cin>>a>>b>>c;
	discriminant=(b*b)-(4*a*c);
	
	if(discriminant>0)
	{
		x1=(-b+sqrt(discriminant)/(2*a));
		x2=(-b-sqrt(discriminant)/(2*a));
		cout<<"Roots are real and unique!!"<<endl;
		cout<<"x1="<<ends<<x1<<"x2="<<ends<<x2;
	}
	
	else if(discriminant==0)
	{
		x1=x2=-b/(2*a);
		cout<<"Roots are real and same!!"<<endl;
		cout<<"x1="<<ends<<x1<<"x2="<<ends<<x2;
	}
	
	else
	{
		real_part=(-b/(2*a));
		imaginary_part=sqrt(-discriminant)/(2*a);
		cout<<"Roots are complex and different!!"<<endl;
		cout<<"x1="<<ends<<real_part<<"+"<<imaginary_part<<"i"<<endl;
		cout<<"x2="<<ends<<real_part<<"-"<<imaginary_part<<"i"<<endl;
	}
	
	return 0;
}
