#include <stdio.h>

void main()
{
    int i,j=0,b=5;
        for(i=0;i<=b;i++)
        {
            while(j<=i)
            {
                printf("$");
                j++;
            }
            j=0;
            printf("\n");
        }
}
