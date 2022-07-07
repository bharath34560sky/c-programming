#include <stdio.h>

void main()
{
    int i,j=1,b=5;
        for(i=1;i<=b;i++)
        {
            while(j<=i)
            {
                printf("%d",j);
                j++;
            }
            j=1;
            printf("\n");
        }
}