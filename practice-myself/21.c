// write a program to read and display transpose of  3X3 matxix .
#include<stdio.h>
int main(){
    int i ,j,row ,col,a[100][100];
    printf("Enter size of row : ");
    scanf("%d",&row);
    printf("Enter size of column : ");
    scanf("%d",&col);
    printf("Enter 3X3 Matrix .\n");
    for(i = 0;i<row;i++){
        for(j = 0;j<col;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Transpose matrix  :\n");
    for(i = 0;i<row;i++){
        for(j = 0;j<col;j++)
        printf("%d  ",a[j][i]);
        printf("\n");
    }
    return 0;
}