#include <stdio.h>

void main()
{
   int a,b,c=0;
    printf("enter the value starded :");
    scanf("%d",&a);
    printf("enter the value of end :");
    scanf("%d",&b);
    for(a=1;a<=b;++a){
         c=a+c;
    }
   printf("the total value is %d",c);
   
}
 
