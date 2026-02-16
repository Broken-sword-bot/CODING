#include<stdio.h>
int main(){
    char s[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N'};
    int n;
    scanf("%d",&n);
    for(int i = 0; i<=n; i++){
        for(int j = 0; j<=i; j++){
            printf("%c",s[j]);
        } 
        printf("\n");
    } return 0 ;
}