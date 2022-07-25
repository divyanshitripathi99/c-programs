#include<stdio.h>
int main()
{  
 int x,y,z;
 printf("enter the 1 number=");
 scanf("%d",&x);
 printf("enter the 2 number=");
 scanf("%d",&y);
 if (y%x == 0)
  {
   z = y/x;
   printf("enter number %d is %d times of %d",x,z,y);
   }
   else {printf("not multiple");}
   }
