#include<stdio.h>
int main(){
    int n ;
    printf("Enter no of rows :");
    scanf("%d",&n);

    for(int i = 1; i<=n;i++){
       int  count = 1;
        for(int j = 1; j<=n-i;j++)printf("  ");
        for(int k = 1; k<=i;k++){
            printf("%4d",count);
            
            count = count *(i-k)/k;

        }
        printf("\n");
    }
    return 0;
}