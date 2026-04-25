#include<stdio.h>
int main(){
    double c ,f ;
    printf("Enter value of celsius : ");
    scanf("%f",&c);


    f = (c * 1.8) + 32;
    printf("fharenheit is %.2f",f);
    return 0;
}