#include<stdio.h>
int main(){
    int n;
    printf("Enter daimond  lentgh :");
    scanf("%d",&n);

    for(int i = 1; i<=n; i++){ // daimond with usei inner and outer lopp for each 
        for(int j = 1; j<=n-i;j++){
            printf(" ");
        }
        for(int k = 1; k<=2*i-1 ; k++){
            printf("*");
        }
        printf("\n");
    }
    for(int i = n-1;i>0;i--){ // daimond is made upper pyramid and inverted pyramid in lower side 
        for(int j = 1; j<=n-i;j++){
            printf(" ");
        }
        for(int k = 1; k<=2*i-1;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}