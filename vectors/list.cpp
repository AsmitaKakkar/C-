#include<iostream>
#include<list>

using namespace std;

void display(list<int> &lst)
{
	list<int>::iterator it;
	for(it=lst.begin();it!=lst.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
}

int main()
{
	list<int> list1;
	list <int> list2(7);
	
	list1.push_back(5);
	list1.push_back(10);
	list1.push_back(15);
	list1.push_back(20);
	/*
	list<int> :: iterator iter;
	iter=list1.begin();
	cout<<*iter<<" ";
	iter++;
	cout<<*iter<<" ";	
	iter++;
	cout<<*iter<<" ";
	iter++;
	cout<<*iter<<" ";	
	iter++;
	cout<<*iter<<" ";	
	iter++;
	cout<<*iter<<" ";	
	iter++;
	cout<<*iter<<" ";	
	iter++;
	cout<<*iter<<" ";	
	iter++;
	*/
	
	display(list1);
	
	//how to remove an element from the list ?
	
	
	//list1.pop_back(); // used to delete the element from the back
	//list1.pop_front(); // used to delete the element from the front
	//list1.remove(10);  // used to delete an element from the middle 
	
	display(list1);
	
	list<int> :: iterator i;
	i=list2.begin();
	*i=40;
	i++;
	*i=6;
	i++;
	*i=9;
	i++;
	*i=49;
	i++;
	*i=60;
	i++;
	*i=900;
	i++;
	*i=987654321;
	i++;
	
	display(list2);
	
	//how to sort an element of the list?
	
	list2.sort();
	
	display(list2);
	
	// how to merge two lists
	
	
	
		
	return 0;
}
