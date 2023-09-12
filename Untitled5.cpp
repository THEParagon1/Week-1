/*Program to swap two numbers*/
#include<stdio.h>
int main()
{
 int a,b;
printf("enter two numbers to swap");
scanf("%d%d",&a,&b);
a=(a+b)-b;
b=(a+b)-a;
printf("The values are %d",b);
printf("and %d",a);
}

