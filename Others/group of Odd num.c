#include <stdio.h>

void main()
{
    int a=0,b,i=0,c=0;
    printf("Enter the NUmber for Start :");
    scanf("%d",&b);
    while(i<=b)
    {
        if(i%2!=0)
        {
            printf("%d ",i);
           
            a++;
            c=c+i;
        }
        i++;
   
    }
    printf("\nThe odd Number group in 1 to %d totall %d\n",b,a);
    printf("the totall Odd number is : %d",c);
}
