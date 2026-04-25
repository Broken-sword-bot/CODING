#include<stdio.h>
int main(){
    int year , week , day , n;
    printf("Enter the number : ");
    scanf("%d",&n);

    year = n/365;
    week = (n % 365) /7;
    day = ((n % 365) % 7 );

    printf("%d year %d week %d day ",year,week,day);
    return 0;

}