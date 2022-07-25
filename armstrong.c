#include<stdio.h>

int main ()
{
	int i,sum=0,r,temp,n;

	printf ("enter the no.");
	scanf ("%d",&n);
	temp=n;
	while (temp>0)
	{
	r=temp%10;
	sum = sum +(r*r*r);
	temp=temp/10;
	}
	if (sum==n)
	{
	printf ("it is armstrong no.");
	}
	else 
	{
	printf ("it is not armstrong no.");
	}
	}
