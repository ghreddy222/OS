#include<stdio.h>
void main()
{
 int b[10],ct[10],at[10]={0},t[10],i,j,n,w[10],atat=0,awt=0;
 printf("\nEnter n value:");
 scanf("%d",&n);
 printf("\nEnter burst time:");
 for(i=0;i<n;i++)
 {
  printf("\nP[%d]:",i+1);
  scanf("%d",&b[i]);
 }
 printf("\nEnter arrival time:");
 for(i=0;i<n;i++)
 {
  printf("\nP[%d]:",i+1);
  scanf("%d",&at[i]);
 }
 ct[0]=b[0]+at[0];
 for(i=1;i<n;i++)
 {
   ct[i]=ct[i-1]+b[i];
 }
 for(i=0;i<n;i++)
 {
 t[i]=ct[i]-at[i];
 w[i]=t[i]-b[i];
 awt=awt+w[i];
 atat=atat+t[i];
 }
 printf("Process Arrival Burst TurnAroundTime WaitingTime\n");
 for(i=0;i<n;i++)
{
 printf("P[%d]\t%d\t%d\t%d\t%d\n",i+1,at[i],b[i],t[i],w[i]);
}
awt=awt/n;
atat=atat/n;
printf("Average waiting time:%d\nAverage Turn around time:%d",awt,atat);
}
