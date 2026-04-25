#include<stdio.h>
int main(){
    int  num , result ;
    printf("Enter a integer : ");
    scanf("%d",&num);

    result = num >> 2 ;
    printf("Division is %d",result );
    return 0;
}