#include<stdio.h>
void right(int,int,int);
int main()
{	
int a, b,c;	
printf("enter the base=");
scanf("%d",&a);
printf("enter the perpendicular=");
scanf("%d",&b);
printf("enter the hypotenuse=");
scanf("%d",&c);
right(c,a,b);
return 0;
}
	void right(int c,int a,int b)
	{
	 if(c*c == a*a + b*b)
	 {
	 printf("right triangle");
	 }
	 else
	 printf("not");
	 }
	 
