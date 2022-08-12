#include<stdio.h>
void main()
{
    int n,i,j,k,m;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    k=n;
    for(i=1;i<=n;i++)//rows;
    {
        for(j=1;j<=k;j++)//columns:
        {
            if((i==1)||(j==1)||(j==k))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        k--;
        printf("\n"); 
    }
}
