#include <stdio.h>

void main()
{
    int a,b,i ;
    printf("enter the value A :");
    scanf("%d",&a);
    printf("enter the value B :");
    scanf("%d",&b);
    for(i=1;i<=b;i++){
        a=a*i;
        printf("%d\t",a);
        
    }
    printf("\n%d",a);
    
}
