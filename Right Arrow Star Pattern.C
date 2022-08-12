#include<stdio.h>
void main()
{
    int i,j,m,n;
    printf("Enter the Number of rows:");
    scanf("%d",&n);
    m=n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            printf(" *");
        }
        m--;
        printf("\n");
    }
    m=2;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            printf(" *");
            
        }
        m++;
        printf("\n");
        if(m==n+1)
        {
            break;
        }
        
    }
}