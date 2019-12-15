//FCFS with Arrival Time
#include<stdio.h>
int main()
{
int p[10],at[10],bt[10],ct[10],tat[10],wt[10],i,j,n,
			temp,t_tat=0,t_wt=0;
float avg_wt,avg_tat;
printf("enter the no.of processes\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\nenter the arrival time of %d:  ",i+1);
scanf("%d",&at[i]);
}
for(i=0;i<n;i++)
{
printf("\nenter the burst time of %d:  ",i+1);
scanf("%d",&bt[i]);
}
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
if(at[i]>at[j])
{
temp=at[i];
at[i]=at[j];
at[j]=temp;
temp=bt[i];
bt[i]=bt[j];
bt[j]=temp;
}
}
}
ct[0]=at[0]+bt[0];
for(i=1;i<n;i++)
{
if(ct[i-1]>at[i])
{
ct[i]=ct[i-1]+bt[i];
}
else
{
ct[i]=ct[i-1]+bt[i]+(at[i]-ct[i-1]);
}
}
for(i=0;i<n;i++)
{
tat[i]=ct[i]-at[i];
t_tat=t_tat+tat[i];
}
for(i=0;i<n;i++)
{
wt[i]=tat[i]-bt[i];
t_wt=t_wt+wt[i];
}
avg_tat=t_tat/(float)n;
avg_wt=t_wt/(float)n;
printf("\npno\tat\tbt\tct\ttat\twt\n");
for(i=0;i<n;i++)
printf("%d\t%d\t%d\t%d\t%d\t%d\n",i+1,at[i],bt[i],
		ct[i],tat[i],wt[i]);
printf("\n average waiting time = %f\naverage turn around time=%f",avg_wt,avg_tat);
}



