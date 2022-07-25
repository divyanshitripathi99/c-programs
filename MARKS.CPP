#include<stdio.h>

 main()
{

int s1,s2,s3,s4,s5;
float avg,percent,total;
printf("\n Enter marks of 5 subjects=");
scanf("%d%d%d%d%d",&s1, &s2, &s3, &s4, &s5 );
total=(s1+s2+s3+s4+s5);
avg=(total/5);
percent=(total/500)*100;
printf("\n totalmarks =%f",total);
printf("\n avg=%f",avg);
printf("\n percent =%f",percent);

}
