#include<stdio.h>
 int main()
{
    int bt[20],p[20],wt[20],tat[20],ct[20],i,j,n,total=0,pos,temp;
    int aw,at;
    printf("Enter 'n' process:");
    scanf("%d",&n);
  
    printf("Enter Burst Time:");
    for(i=0;i<n;i++)
    {
        printf("p[%d]:",i+1);
        scanf("%d",&bt[i]);
        p[i]=i+1;         
    }
  
   //sorting of burst times
    for(i=0;i<n;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(bt[j]<bt[pos])
                pos=j;
        }
  
        temp=bt[i];
        bt[i]=bt[pos];
        bt[pos]=temp;
  
        temp=p[i];
        p[i]=p[pos];
        p[pos]=temp;
    }
   
    wt[0]=0;            
  
   
    for(i=1;i<n;i++)
    {
        wt[i]=0;
        for(j=0;j<i;j++)
            wt[i]+=bt[j];
  
        total+=wt[i];
    }

   ct[0]=bt[0]+tat[0];
 for(i=1;i<n;i++)
 {
   ct[i]=ct[i-1]+bt[i];
 }
  
    aw=total/n;      
    total=0;
  
    printf("\nProcesst    Burst Time    \tWaiting TimetTurnaround Time\t completion time");
    for(i=0;i<n;i++)
    {
        tat[i]=bt[i]+wt[i];   
        total+=tat[i];
        printf("\np[%d]\t\t  %d\t\t    %d\t\t\t%d\t %d",p[i],bt[i],wt[i],tat[i],ct[i]);
    }
  
    at=total/n;    
    printf("\nnAverage Waiting Time=%d",aw);
    printf("\nAverage Turnaround Time=%d\n",at);
}
