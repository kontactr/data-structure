#include<iostream>
#include<conio.h>
#define n 10
using namespace std;
int a[n],b,c,top=-1,a1[n],stop=-1,sbottom=0,bottom=-1;
void push()
{
	if(top>n-2)
	cout<<"overflow....\n\n";
	else
	{
		top++;
		cout<<"enter your element: ";
		cin>>b;
		a[top]=b;
		if(bottom=-1)
		bottom=0;
		
}
}

void  way_stack()
{
	sbottom=0,stop=-1;
	for(int y=top;y>=0;y--)
	{
		stop++;
		a1[stop]=a[y];
	}
	sbottom++;
	for(int y=sbottom,z=top-1; y<=stop;y++,z--)
	{
		
		a[z]=a1[y];
	}
	top--;
}

void display()
{
	for(int t=0;t<=top;t++)
	cout<<a[t]<<"\t";
	cout<<"\n\n";
}

main()
{
	int y;
	do
	{
	cout<<"1.insert\n2.delete\n3.display\n4.exit";
	cout<<"\nenter your choice: ";
	cin>>y;
	switch(y)
	{
		case 1:
			push();
			break;
		case 2:
			way_stack();
			break;
		case 3:
			display();
			break;
		case 4:
			exit(0);
			break;
		default:
			cout<<"invalid....\n\n";
			break;
}
}while(y!=4);
getch();
	}
	
