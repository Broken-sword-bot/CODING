#include<stdio.h>
int main(){
    int a , b , c;
    printf("Enter value of a :");
    scanf("%d",&a);
    printf("enter value of b :");
    scanf("%d",&b);
    printf("Enter value of c : ");
    scanf("%d",&c);

    (a>b && a>c)? printf("A is largest ") :  (b>c ? printf("B is largest") : printf("C is largest :") );
    return 0;
    
}