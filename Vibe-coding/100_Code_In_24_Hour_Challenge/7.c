#include<stdio.h>
int main(){
    int a = 5, b = 10, temp;
    printf("Before swapping [%d,%d]",a,b);
    temp = a;
    a = b;
    b = a;
    printf("After swapping [%d,%d]",a,b);
    return 0;
    
}