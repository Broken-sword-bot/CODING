#include<stdio.h>
int main(){
    int n;
    printf("Enter no of Rows :");
    scanf("%d",&n);

    for(int i = 1; i<=n; i++){ // mirrored angle triangle 
        for(int j = 1; j<=n-i;j++){
            printf(" ");
        }
        for(int k = 1; k<=i;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}