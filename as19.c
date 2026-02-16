#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter scope of your daimond :");
    scanf("%d",&n);

    for(int i = 1; i<=2*n-1;i++){
        for(int j = 1; j<=2*n-1;j++){ // Dainmond using formula of cordinate geometrry 
            if(abs(n-i)+ abs(n-j)<=n -1 ) // 
            printf("*"); 
            else printf(" ");
        } 
        printf("\n");
    }
    return 0;
}