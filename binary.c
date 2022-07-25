#include<stdio.h>

int main()
{
int a[50],n,i;
printf("enter the decimal no.");
scanf ("%d",&n);
for (i=0;n>0;i++)
{
a[i]=n%2;
n=n/2;
}
printf("binary digit ");
for(i=i-1;i>=0;i--)
{
printf (" %d",a[i]);
}
return 0;
}
