#include<stdio.h>
void main()
{
    int n,i,j,k,m;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    k=1;
    for(i=1;i<=n;i++)//rows;
    {
        for(j=1;j<=n;j++)//columns:
        {
           if(j>=k)
           {
               if((j==k)||(j==n)||(i==1))
               {
               printf(" *");
               }
               else
               {
                   printf("  ");
               }
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
