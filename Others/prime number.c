#include <stdio.h>

int main()
{
    int a,b,c=0,i;
    printf("enter the prime number :");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        b=a%i;
        if(b==0){
            c++;
        }
    }
    printf("%d",c);
    if(c==2){
        printf("this is prime number :");
        
    }
    else{
        printf("this not prime number :");
        
    }
    return 0;
}
