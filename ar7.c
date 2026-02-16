#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);

    for(int i = 1; i<=n; i++){
        for(int j = 1 ; j<=n-i;j++){
            if(abs(n-i)+ abs(n-j)== n-1)
            printf("%d",i);
        } printf("\n");
    } return 0;
}