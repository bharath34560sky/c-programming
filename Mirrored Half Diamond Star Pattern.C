#include<stdio.h>
void main()
{
    int n,i,j,k,m;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    m=n;
    for(i=1;i<=n;i++)//rows;
    {
        for(j=1;j<=n;j++)//columns:
        {
            if(j>=m)
            {
              printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        m--;
        printf("\n"); 
    }
m=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j>m)
            {
              printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        m++;
     printf("\n");   
    }
}