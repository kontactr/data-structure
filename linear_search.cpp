#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	cout<<"enter your size of array: ";
	int choice;
	cin>>choice;
	cout<<endl;
	int a[choice],i;
	for(i=0;i<choice;i++)
	{
		cout<<"enter your element: ";
		cin>>a[i];
	}
	cout<<"\n\nenter your element you want to search from the array: ";
	int b;
	cin>>b;
	for(i=0;i<choice;i++)
	{
		if(a[i]==b)
		{
			cout<<"element: "<<a[i]<<" poisition: "<<i+1;
			break;
		}
	}
	if(i==choice)
	cout<<"element not found......";
	getch();
}
