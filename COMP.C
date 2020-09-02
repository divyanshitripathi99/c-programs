//0jective/Program :  Wite a program that calculates the Simple Interest and Compound Interest. The Principle ,Amount, Rate of  Interest and Time are entered through  the keyboard .

#include<stdio.h>
#include<math.h>

int main()
{

float P,R,T,CI,A,x,SI;
printf("\n enter the values of\n Principle, Rate, Time = ");
scanf("%f%f%f",&P, &R, &T);
x=1+R/100;
A=P*pow(x,T);
CI=A-P;
printf("\n compound interest is %f",CI);
SI=(P*R*T)/100;
printf("\n simple interest=%f\n" , SI);
return 0;
}




