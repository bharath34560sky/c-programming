#include <stdio.h>

void main()
{  
     int a,b,i,c;
      printf("enter the number it you what to multiplie :");
      scanf("%d",&a);
      printf("enter the number how many times you want to multiplie : ");
      scanf("%d",&b);
      for(i=1;i<=b;i++){
          printf("\n%d * %d =",a,i);
          c=a;
          c*=i;
          printf("%d",c);
      }
       
       
}
