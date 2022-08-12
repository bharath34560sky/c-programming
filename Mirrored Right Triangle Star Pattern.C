#include<stdio.h>
void main()
{
    int n,i,j,k,m;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    k=n;
    for(i=1;i<=n;i++)//rows;
    {
        for(m=1;m<=k;m++)
        {
            printf(" ");
        }
        k--;
        for(j=1;j<=i;j++)//columns:
        {
           printf("*");
        }
        printf("\n"); 
    }
}