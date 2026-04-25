#include<stdio.h>
int main(){
    int a = 5 , b = 6 ;
    printf("Before swapping [%d,%d]",a,b);
    a = (a*b);
    b = (a/b);
    a = (a/b);
    printf("\nAfter swap is [%d,%d]",a,b);
    return 0;
}