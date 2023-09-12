/*Converting kilometer to meter centimeter and millimeter*/
#include<stdio.h>
int main()
{
 float k,m,c;
printf("enter the value of k");
scanf("%f",&k);
c=k*100000;
m=k*1000;
printf("The value in centimeter is %fcm",c );
}
