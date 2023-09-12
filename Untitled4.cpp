/*Percentage of a student given the marks of 5 different subjects*/
#include<stdio.h>
int main()
{
float a,b,c,d,e,x;
printf("Enter the values of a,b,c,d,e");
scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
x=(a+b+c+d+e)*100/5;
printf("The value of the percentage is %f ",x);
}


