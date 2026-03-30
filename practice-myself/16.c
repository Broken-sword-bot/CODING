//. write a program to print the elements of 2D array. 
#include<stdio.h>
int main(){
    int arr[2][2];
    printf("Enter elements of 2d  array: ");
    for(int i = 0;i<2;i++){
        for(int j = 0;j<2;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("2D array :\n");
    for(int i = 0;i<2;i++){
        for(int j = 0;j<2;j++){
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}