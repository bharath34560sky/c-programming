#include <stdio.h>

void main()
{
   int a;
   
   printf("enter the value for a ");
   scanf("%d",&a);
   
   if (a%2==0){
       printf("this is even value ");
       
   }
   else if (a%2!=0){
       printf("this is odd value ");
       
   } 
  /* else {
       printf("this is -ve value ");
       
   }*/
}
