#include<stdio.h>
 main()
{

int a,b,tem;
printf("\n enter the value of first no.=");
scanf("%d",&a);
printf("\n enter the value of second no. =");
scanf("%d",&b);
printf("before swapping \n first no =%d \n second no =%d \n",a,b);
tem=a;
a=b;
b=tem;
printf("after swapping \n first no =%d \n second no =%d",a,b);
return 0
}
