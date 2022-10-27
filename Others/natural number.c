#include <stdio.h>
void main()
{
    int a,b,c=0;
    printf("enter the stard value :");
    scanf("%d",&a);
    printf("this is a natural number :");
    for(b=0;b<=a;b++){
        c=c+b;
        printf(" %d",c);
    }
}
