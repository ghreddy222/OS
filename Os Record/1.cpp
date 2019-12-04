#include<stdio.h>
int main ()
{
int b[10],n,w[10],t[10],ct[20],i;
float aw,at;
printf("Enter n value");
scanf("%d",&n);

printf("Enter Burst Time");
	for(i=0;i<n;i++)
{
	printf("P[%d]:",i);
	scanf("%d",&b[i]);
}

w[0]=aw=0;
t[0]=at=b[0];

	for(i=1;i<n;i++)
{
	w[i]=w[i-1]+b[i-1];
	t[i]=t[i-1]+b[i];
	aw=aw+w[i];
	at=at+t[i];
}
for(i=0;i<n;i++)
{
		ct[i]=t[i];
		
}

 printf("\nProcess\t\tBurst TimetWaiting completetime TimetTurnaround Time");

for (i=0;i<n;i++)
{
printf("\nP[%d]\t\t%d\t\t%d\t\t%d\t\t%d",i,b[i],ct[i],w[i],t[i]);
}

printf("\nAverage Waiting Time:%f",aw/n);
printf("\nAverage Turnaround Time:%f",at/n);
 
}
