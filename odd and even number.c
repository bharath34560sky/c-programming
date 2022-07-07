#include <stdio.h>

void main()
{
   int a,b,c=0,d=0;
    printf("enter the value starded :");
    scanf("%d",&a);
    printf("enter the value of end :");
    scanf("%d",&b);
    printf("this are even numbers : ");
    for(c=a;c<=b;++c){
        if(c%2==0){
            printf("%d ",c);
         d++;
        }
        
    }
    printf("\nthe total even number is : %d \n",d);
   printf("this are odd numbers : ");
   d=0;
   for (c=a;c<=b;++c){
       if(c%2!=0){
           printf("%d ",c);
           d++;
       }
   }
   printf("\nthis total odd number is given : %d",d);
   
}
 