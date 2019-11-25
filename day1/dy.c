#include<stdio.h>
#include<stdlib.h>
int main()
{
int *array,size,index;
printf("Enter size");
scanf("%d",&size);
array=(int*)malloc(sizeof(int));
for(index=0;index<size;index++)
{
array[index]=index;      
printf("%d",array[index]);
   }
}
