#include<stdio.h>
void main()
{
 int a[10],b[10],x[10];
 int wt[10],tat[10],ct[10];
 int i,j,sm,c=0,time,n;
int avg=0,tt=0,end;

 printf("\nEnter the number of Processes: ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
   printf("\nEnter arrival time of process %d : ",i+1);
   scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
   printf("\nEnter burst time of process %d : ",i+1);
   scanf("%d",&b[i]);
 }
 for(i=0;i<n;i++)
 x[i]=b[i];

  b[9]=9999;

 for(time=0;c!=n;time++)
 {
   sm=9;
  for(i=0;i<n;i++)
  {
   if(a[i]<=time && b[i]<b[sm] && b[i]>0 )
   sm=i;
  }
  b[sm]--;

  if(b[sm]==0)
  {
   c++;
   end=time+1;
   ct[sm] = end;
   wt[sm] = end - a[sm] - x[sm];
   tat[sm] = end - a[sm];
  }
 }
 printf("pid \t burst \t arrival \twt \ttat \tct");
 for(i=0;i<n;i++)
 {
   printf("\n %d \t   %d \t %d\t\t%d   \t\t%d\t\t%d",i+1,x[i],a[i],wt[i],tat[i],ct[i]);
   avg = avg + wt[i];
   tt = tt + tat[i];
 }
 printf("\n\nAverage wt time = %d\n",avg/n);
 printf("Average tat time = %d",tt/n);

}
