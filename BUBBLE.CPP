#include<iostream>
#include<conio.h>
#define n 5
using namespace std;
main()
{
int arr[n],i=-1,j,count=0;
for(i=0;i<n;i++)
{
cout<<"enter element: ";
cin>>arr[i];
}
do
{
	count=0;
for(i=0;i<n-1;i++)
{
	j=i+1;
	if(arr[i]>arr[j])
	{
		int temp;
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		count++;
	}
}
}while(count!=0);
for(i=0;i<n;i++)
{
cout<<"your element: ";
cout<<arr[i]<<endl;
}
getch();
}

