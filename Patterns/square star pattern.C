#include<stdio.h>
void main()
{
    int n,i,j;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)//rows;
    {
        for(j=1;j<=n;j++)//columns:
        {
            printf(" *");
            
        }
        printf("\n"); 
    }
}
