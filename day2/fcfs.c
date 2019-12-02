#include<stdio.h>
int main ()
{
int b[10],n,w[10],t[10],aw=0,at=0,i,j;
printf("Enter n value");
scanf("%d",&n);

printf("Enter Burst Time");
	for(i=0;i<n;i++)
{
	printf("P[%d]:",i+1);
	scanf("%d",&b[i]);
}

w[0]=0;

	for(i=1;i<n;i++)
{
	w[i]=0;
	for(j=0;j<i;j++)
	w[i]=w[i]+b[j];
}

 printf("\nProcess\t\tBurst TimetWaiting TimetTurnaround Time");

for (i=0;i<n;i++)
{
t[i]=b[i]+w[i];
aw+=w[i];
at+=t[i];
printf("\nP[%d]\t\t%d\t\t%d\t\t%d",i+1,b[i],w[i],t[i]);
}
aw/=i;
at/=i;
printf("\nAverage Waiting Time:%d",aw);
printf("\nAverage Turnaround Time:%d",at);
 
}

