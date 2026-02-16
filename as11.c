#include<stdio.h>
int main(){
    int n;
    printf("Enter no of rows :");
    scanf("%d",&n);

    for(int i = n; i>0;i--){ //  inverted triangle
        for(int k = 1; k<=n-i;k++){// with space its left side inverted and without spaces its right side inverted 
            printf(" ");
        }
        for(int j = 1; j<=i; j++){ 
            printf("*");
        }
        
        printf("\n");

    } return 0;

}