//**************BILLING SYSTEM************


#include<iostream>
using namespace std;
int main()
{
	float total,amount;
	int pen,pencil,milk,bread,butter,eraser,cream,fruits;
	float ppen,ppencil,pmilk,pbread,pbutter,peraser,pcream,pfruits;
	cout<<"Number of pens:";
	cin>>pen;
	cout<<"price of one pen:";
	cin>>ppen;
	cout<<"Number of pencils purchased:";
	cin>>pencil;
	cout<<"price of one pencil:";
	cin>>ppencil;
	cout<<"Number of milk packets purchased:";
	cin>>milk;
	cout<<"price of one milk packet:";
	cin>>pmilk;
	cout<<"Number of breads purchased:";
	cin>>bread;
	cout<<"Price of one bread:";
	cin>>pbread;
	cout<<"Number of butter purchased:";
	cin>>butter;
	cout<<"Price of one butter:";
	cin>>pbutter;
	cout<<"Number of erasers purchased:";
	cin>>eraser;
	cout<<"price of one eraser:";
	cin>>peraser;
	cout<<"Number of creams purchased:";
	cin>>cream;
	cout<<"Price of one cream:";
	cin>>pcream;
	cout<<"Number of fruits purchased:";
	cin>>fruits;
	cout<<"Price of one fruit:";
	cin>>pfruits;
	cout<<endl;
	
	total=(pen*ppen)+(pencil*ppencil)+(milk*pmilk)+(bread*pbread)+(butter*pbutter)+(eraser*peraser)+(cream*pcream)+(fruits*pfruits);
	
	if(total>1000)
	{
		amount=total-(total*.1);
	}
	else
	{
		amount=total;
	}
	
	cout<<"***************************BILL**************************"<<endl;
	cout<<"---------------------------------------------------------"<<endl;
	cout<<"SR.NO."<<"\t\t"<<"item"<<"\t\t"<<"number"<<"\t\t"<<"price"<<endl;
	cout<<"---------------------------------------------------------"<<endl;
	cout<<"1."<<"\t\t"<<"pen"<<"\t\t"<<pen<<"\t\t"<<ppen<<endl;
	cout<<"2."<<"\t\t"<<"pencil"<<"\t\t"<<pencil<<"\t\t"<<ppencil<<endl;
	cout<<"3."<<"\t\t"<<"milk"<<"\t\t"<<milk<<"\t\t"<<pmilk<<endl;
	cout<<"4."<<"\t\t"<<"bread"<<"\t\t"<<bread<<"\t\t"<<pbread<<endl;
	cout<<"5."<<"\t\t"<<"butter"<<"\t\t"<<butter<<"\t\t"<<pbutter<<endl;
	cout<<"6."<<"\t\t"<<"eraser"<<"\t\t"<<eraser<<"\t\t"<<peraser<<endl;
	cout<<"7."<<"\t\t"<<"cream"<<"\t\t"<<cream<<"\t\t"<<pcream<<endl;
	cout<<"8."<<"\t\t"<<"fruits"<<"\t\t"<<fruits<<"\t\t"<<pfruits<<endl;
	cout<<"--------------------------------------------------------"<<endl;
	cout<<"Payable Amount->"<<amount<<endl;
	
	
	
	return 0;
}
