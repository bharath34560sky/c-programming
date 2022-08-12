#include<stdio.h>
void main()
{
    int n,i,j,k,m;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)//rows;
    {
        for(j=1;j<=i;j++)//columns:
        {
           printf(" *");
        }
        printf("\n"); 
    }
m=n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<m;j++)
        {
            printf(" *");
        }
        m--;
     printf("\n");   
    }
}