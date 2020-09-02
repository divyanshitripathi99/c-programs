#include<stdio.h>
#define PI (3.14)
int main()
{
clrscr();
float cf,area,r;
printf("\n enter the radius of circle=");
scanf("%f",&r);
area=PI*r*r;
cf=2*PI*r;
printf("\n Area of circle is%f",area);
printf("\n Circumference if circle is %f",cf);

return 0;
}
