#include<stdio.h>
int main(){
    int n ; 
    scanf("%d",&n);

for(int i = 0;i<n*(n+1);i++){
    if(i%(n+1)==0){
        printf("\n");
    } 
    else if(i%(n+1)<= i/(n+1)+1){
        printf("*");
    } 
    else {
        printf(" ");
    }
}
}