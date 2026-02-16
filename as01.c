#include<stdio.h>
int main(){
    int n; 
    scanf("%d",&n);
    
    for(int i = 1; i <=n; i++){
        int cf = 1;
        
        for(int j = 1 ; j<= n-i;j++)printf("  ");

        for(int j = 1 ; j<= i; j++){
            printf("%4d", cf);
            cf = cf * (i - j)/j; // formula for pascals triangle n = (a-b)/b;
            
        } printf("\n");
    }
    return 0;
}