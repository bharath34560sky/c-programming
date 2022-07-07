#include <stdio.h>

void main()
{
   int a,b,c;
   printf("enter the value for cube:");
   scanf("%d",&b);
   for(a=1;a<=b;a++)
   {
       c=a*a*a;
       printf("Number is: %d and cube of the %d is :%d\n",a,a,c);
   }
  
}