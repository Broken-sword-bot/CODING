#include<stdio.h>
int main(){
    int a , b ,add , sub , mul , div ;
    printf("Enter value of a :");
    scanf("%d",&a);

    printf("Enter value of b :");
    scanf("%d",&b);

    add = a+ b;
    sub = a-b;
    mul = a *b;
    div = a/b;

    printf("add is %d sub is %d mul is %d div is %d",add,sub,mul,div );
    return 0;
}