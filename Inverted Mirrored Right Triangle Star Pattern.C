#include<stdio.h>
void main()
{
    int n,i,j,k,m;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    k=1;
    for(i=1;i<=n;i++)//rows;
    {
        for(j=1;j<=n;j++)
        {
            if(j>=k)
            {
            printf("*");
            }
            else
            {
                printf(" ");
            }
            
        }
        k++;
        printf("\n"); 
    }
}
