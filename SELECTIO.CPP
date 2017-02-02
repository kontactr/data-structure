#include<iostream>
#include<conio.h>
#define n 5
using namespace std;
main()
{
int arr[n],i,j;
//clrscr();
for(i=0;i<n;i++)
{
cout<<"enter element: ";
cin>>arr[i];
}
for(i=0;i<=n-1;i++)
{
for(j=i+1;j<n;j++)
{
if(arr[i]>arr[j])
{
int temp;
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
}
for(j=0;j<n;j++)
{
cout<<"sorted your element: ";
cout<<arr[j]<<endl;
}
getch();
}
