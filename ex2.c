#include<stdio.h>
int main()
{
	int count=0,x,i;
	printf("Enter the number =");
	scanf("%d",&x);
	for(i=1;i<=x;i++)
	{  if(x%i==0)
		{
		 count= count+1;
		 /*printf("%d",count);*/
		}
	}
	if(count==2){
	 printf("it is prime no.");
	 }
	else{
	 printf("not");
	 }
	}
