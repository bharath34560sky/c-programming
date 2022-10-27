#include<stdio.h>
void main()
{
    int n,i,j,m;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)//rows;
    {
        for(m=1;m<i;m++)
        {
            printf(" ");
        }
        for(j=1;j<=n;j++)//columns:
        {
            if((i==1)||(i==n)||(j==1)||(j==n))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n"); 
    }
}
