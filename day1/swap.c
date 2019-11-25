#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter values A B");
scanf("%d %d",&a, &b);

c=a;
a=b;
b=c;
printf("Swap values are : %d %d",a,b);
}
