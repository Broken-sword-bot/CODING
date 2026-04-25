#include<stdio.h>
int main(){
    double c ,f ;
    printf("Enter value of fahrenheit : ");
    scanf("%f",&f);


    c = (f * 1.8) - 32;
    printf("fharenheit is %.0f",c);
    return 0;
}