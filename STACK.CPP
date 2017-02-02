#include<iostream>
#include<conio.h>
#define n 5
using namespace std;
int top=-1,a[n];
void insert()
{
int t;
if(top<n-1)
{
cout<<"element insert: ";
cin>>t;
top++;
a[top]=t;
}
else
{
cout<<"overflow....\n";
}
}

void delete1()
{
if(top<0)
cout<<"underflow.....\n";
else
top--;
}

void search()
{
int h;
cout<<"enter your pos: ";
cin>>h;
if(top-h+1>0)
cout<<"element: "<<a[top-h]<<"\n";
else
cout<<"not found....\n";
}


void display()
{
for(int y=0;y<=top;y++)
cout<<a[y]<<"\t";
cout<<"\n";
}

void update()
{
int h,l;
cout<<"enter your pos: ";
cin>>h;
if(top-h+1>0)
{
cout<<"element: "<<a[top-h+1];
cout<<"\nreplace with: ";
cin>>l;
a[top-h+1]=l;
}
else
cout<<"not found....\n";
}


main()
{
int y;
//clrscr();
do
{
cout<<"1.insert\n2.delete\n3.update\n4.search\n5.display\n6.exit";
cout<<"\n\nyour choice: ";
cin>>y;
switch(y)
{
case 1:
insert();
break;
case 2:
delete1();
break;
case 3:
update();
break;
case 4:
search();
break;
case 5:
display();
break;
case 6:
exit(0);
break;
default:
cout<<"invalid......\n";
break;
}
}while(y!=6);
getch();
}


