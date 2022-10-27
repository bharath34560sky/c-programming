#include <stdio.h>

void main()
{
    int i,j=1,b=4,c=1;
        for(i=1;i<=b;i++)
        {      
            while(j<=i)
            {
                printf("%d",c);
                c++;
                j++;
            }
            j=1;
            printf("\n");
        }
}
