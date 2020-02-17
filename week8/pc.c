#include<stdio.h>
#include<stdlib.h>
void main()
{
int buffer[10], bufsize, in, out, produce, consume, choice=0;
in = 0;
out = 0;
bufsize = 10;
while(choice!=3)
{
printf("\n 1. Produce \t 2. Consume \t 3. Exit\n");
printf("\nEnter your choice: \n");
scanf("%d",&choice);
switch(choice) {
case 1: if((in+1)%bufsize==out)
printf("\nBuffer is Full\n");
else
{
printf("\nEnter the value:\n");
scanf("%d", &produce);
buffer[in] = produce;
in = (in+1)%bufsize;
}
break;
case 2: if(in==out)
printf("\nBuffer is Empty\n");
else
{
consume = buffer[out];
printf("\nThe consumed value is %d\n", consume);
out = (out+1)%bufsize;
}
break;
}
}
}


