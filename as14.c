#include<stdio.h>
int main(){
    int n; 
    scanf("%d",&n);

    for(int i = 0; i<=n; i++){ // binary triangle 0 and 1
        for(int j = 0; j<=i;j++){
            printf("%d",j%2);
        }
        printf("\n");
    }
    return 0;
}