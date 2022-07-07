#include <stdio.h>

void main()
{
   int a,b,c;
    printf("enter the number a,b and c");
    scanf("%d %d %d",&a,&b,&c);
    
    if ((a==b)&&(b==c)&&(180==a+b+c)){
        printf("this is parfect triangle");
    }
   else if ((c==a+b)||(a==b+c)||(b==c+a)){
       printf("this iso lated triangle");
       
   }
   else{
       printf("this not a prefect triangle");
   }
   
}
