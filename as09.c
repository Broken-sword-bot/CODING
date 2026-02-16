#include<stdio.h>
int main(){
    int n ; 
    printf("enter no rows you would like to Print :");
    scanf("%d",&n);

    for(int i = 1; i<=n;i++){
        for(int j = 1; j<=i;j++){
            printf("%d",j); // j will br printed like 1 / 12/ 123/1234 
        } 
        printf("\n");
    }
    return 0;
}