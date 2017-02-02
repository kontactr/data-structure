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
for(j=0;j<=i;j++)
{
//cout<<i<<j<<endl;
if(arr[i]<arr[j])
{
int temp;
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
}
for(i=0;i<n;i++)
{
cout<<"enter element: ";
cout<<arr[i]<<endl;
}
getch();
}
