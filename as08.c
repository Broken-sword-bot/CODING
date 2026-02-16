#include<stdio.h>
int main(){
    int n; 
    printf("Enter no of rows you want :");
    scanf("%d",&n);
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i;j++){
            printf("%d",i); // row will be same and j means coulumn will run till  j<=i that would be coulmn ;
        }
        printf("\n");
    } return 0;
}