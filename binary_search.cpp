#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int b,low,high,mid,choice;
	cout<<"choice \n\n0.aseecnding.......\n1.desscending.......\n\n";
	cout<<"enter your choice: ";
	cin>>choice;
	switch(choice)
	{
	case 0:
	{
		int size;
		cout<<"enter your array size: ";
		cin>>size;
		int a[size];
		for(int i=0;i<size;i++)
	{
		cout<<"enter your element: ";
		cin>>a[i];
	}
	cout<<endl<<"enter your element you want to search: ";
	cin>>b;
	low=0;
	high=size-1;
	mid=(low+high)/2;
	do
	{
		if(a[mid]>b)
		{
		high=mid-1;
		mid=(low+high)/2;
	}
		else if(a[mid]<b)
		{
		low=mid+1;
		mid=(low+high)/2;
	}
		else
		{
		cout<<"poisition: "<<mid+1<<" element: "<<a[mid]<<endl;
		break;
	}
	}while(1);
	break;
}
case 1:
	{
		int size;
		cout<<"enter your array size: ";
		cin>>size;
		int a[size];
		for(int i=0;i<size;i++)
	{
		cout<<"enter your element: ";
		cin>>a[i];
	}
	cout<<endl<<"enter your element you want to search: ";
	cin>>b;
	low=0;
	high=size-1;
	mid=(low+high)/2;
	do
	{
		if(a[mid]<b)
		{
		high=mid-1;
		mid=(low+high)/2;
	}
		else if(a[mid]>b)
		{
		low=mid+1;
		mid=(low+high)/2;
	}
		else
		{
		cout<<"poisition: "<<mid+1<<" element: "<<a[mid];
		break;
	}
	}while(1);
	break;
}
default:
	{
		cout<<"invalid......";
		break;
}
}
	getch();
}
