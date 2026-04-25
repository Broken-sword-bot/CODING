#include<stdio.h>
int main(){
    float a , b , mul;
    printf("Enter value of a : ");
    scanf("%f",&a);
    printf("Enter value of b : ");
    scanf("%f",&b);
    mul = (a*b);

    printf("Multiplication is %.2f",mul);
    return 0;

}