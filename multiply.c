#include<stdio.h>

int main()
{
int n1,n2,i,result=0;
printf("enter first number = ");
scanf( "%d", &n1);
printf("enter second number = ");
scanf( "%d", &n2);

for (i=0; i<n2;i++)
{
	result+=n1;
}
printf("\n Multiply of %d and %d = %d ",n1, n2, result);
printf("\n")
}
