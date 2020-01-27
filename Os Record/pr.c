
#include<stdio.h>
void main()
{
int bt[20],p[20],wt[20],tat[20],pr[20],i,j,n,pos,t;
float awt=0,atat=0;
printf("Enter Total Number of Process:");
scanf("%d",&n);
printf("\nEnter Burst Time");
for(i=0;i<n;i++)
{
scanf("%d",&bt[i]);
}
printf("Priority:");
for(i=0;i<n;i++)
{
scanf("%d",&pr[i]);

}
for(i=0;i<n;i++)
{
pos=i;
for(j=i+1;j<n;j++)
{
if(pr[j]<pr[pos])
{
	pos=j;
}
}

t=pr[i];
pr[i]=pr[pos];
pr[pos]=t;

t=bt[i];
bt[i]=bt[pos];
bt[pos]=t;

t=p[i];
p[i]=p[pos];
p[pos]=t;
}
wt[0]=0;
printf("\nProcess\tBurst Time\tpr\tWaiting Time\tTurnaround Time");
for(i=0;i<n;i++)
{
wt[i]=0;
tat[i]=0;
for(j=0;j<i;j++)
{
	wt[i]=wt[i]+bt[j];
	
}
tat[i]=wt[i]+bt[i];
awt=awt+wt[i];
atat=atat+tat[i];
printf("\nP[%d]\t %d\t%d\t%d\t%d",i+1,bt[i],pr[i],wt[i],tat[i]);

}
awt=awt/n;
atat=atat/n;
printf("\n\nAverage Waiting Time=%f",awt);
printf("\nAverage Turnaround Time=%f\n",atat);
}

