#include<stdio.h>
int main(){
    int n; 
    int row = 1; 
    int count = 1;

    printf("enter value of n :");
    scanf("%d",&n);

    for(int i = 0; i<=(n*(n+1)/2);i++){
        printf("*");
        if(row == count){
            printf("\n");
            row++;
            count = 1;
        }
        else{
            count++;
        }
    } 
    return 0;
}