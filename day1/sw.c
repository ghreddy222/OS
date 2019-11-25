#include <stdio.h>
int main()
{
        int n;
printf("Enter n Value");
scanf("%d",&n);
        switch (n) 
{
            case 1:
                printf("C");
                break;
            case 2:
                printf("CPP");
                break;
            case 3:
                printf("OS");
                break;
            default:
                printf("counting......");
                break;
        }
        return 0;
    }
