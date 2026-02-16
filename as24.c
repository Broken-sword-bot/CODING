#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter scope of your butterfly :");
    scanf("%d",&n);

for(int i = 1; i<=n;i++){
    for(int j = 1; j<=i;j++){ // upper half of my butterfly 
        printf("*");
    }
    for(int j = 1; j<=2*(n-i);j++){
        printf(" ");
    } 
    for(int j = 1; j<=i;j++){
        printf("*");
    }
    printf("\n");
     }
for(int i = n-1; i>0;i--){ // lower half of butterfly 
    for(int j = 1; j<=i; j++){
        printf("*");
    }
    for(int j = 1; j<=2*(n-i);j++){
        printf(" ");

    }
    for(int j = 1; j<=i; j++){
        printf("*");
    }
    printf("\n");
}
return 0;


}