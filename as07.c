#include<stdio.h>
#include<stdlib.h>
int main(){
    int n; 
    printf("Enter value of N :");
    scanf("%d",&n);

    for(int i = 1; i<=n;i++){
       
        
        for(int k = 1; k<=n;k++){
            if( i == 1 || k == 1 || i == n || k == n )// hollow square 
            {
                printf("*");
            
            } 
            else printf(" ");
        } printf("\n");
    } return 0;
}