#include<stdio.h>
void main()
{
    int n,i,j,k;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    k=n;
    for(i=1;i<=n;i++)//rows;
    {
        for(j=1;j<=k;j++)//columns:
        {
           printf("*");
        }
        k--;
        printf("\n"); 
    }
}
