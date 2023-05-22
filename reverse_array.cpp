#include<stdio.h>
int reverse(int a[],int n);
main()
{
	int a[]={1,2,3,4,5};
	reverse(a,5);
	for(int i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
}
int reverse(int a[],int n)
{
	for(int i=0;i<n/2;i++)
	{
		int first = a[i];
		int second = a[n-i-1];
		a[i]=second;
		a[n-i-1]=first;
	}
}
