#include <stdio.h>

void main()
{
   int a,b;
   a=0;
   b=100;
   for(a=1;a<=b;a++){
       printf("\n%d",a);
       if(a%5==0){
           printf("\b\b\bpass");
       }
   }
}

