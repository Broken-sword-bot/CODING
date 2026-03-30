// write a program to input two m*n matrices and calculate sum of their corresponding elements and store it in a third matrix .
#include<stdio.h>
int main(){
    int i ,j,row1,col1,a[100][100],b[100][100],c[100][100];
    printf("Enter size of first row amtrix 1: ");
    scanf("%d",&row1);
    printf("Enter size of column  matrix 1 : ");
    scanf("%d",&col1);
    printf("Enter elements of %dx%d matrix : ",row1,col1);
    for(i = 0;i<row1;i++){
        for(j = 0;j<col1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter elements of %dx%d matrix : ",row1,col1);
    for(i = 0;i<row1;i++){
        for(j = 0;j<col1;j++){
            scanf("%d",&b[i][j]);
        }
    }

for(i = 0;i<row1;i++){
    for(j = 0;j<col1;j++){
        c[i][j] = a[i][j] + b[i][j];
    }
}
printf("After addition of matrix : \n");
for(i = 0;i<row1;i++){
    for(j =0;j<col1;j++){
        printf("%d  ",c[i][j]);
    }
    printf("\n");
}
    return 0;
}