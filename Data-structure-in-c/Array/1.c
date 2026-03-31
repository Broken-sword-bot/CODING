// write a program to read and display 2x2x2 matrix .
#include<stdio.h>
int main(){
    int i ,j,k,a[100][100][100],x,y,z;
    printf("Enter size of row : ");
    scanf("%d",&x);
    printf("Enter size of column : ");
    scanf("%d",&y);
    printf("Enter size of height : ");
    scanf("%d",&z);

    printf("Enter elements of %dx%dx%d matrix .\n",x,y,z);
    for(i = 0;i<x;i++){
        for(j =0;j<y;j++){
            for(k =0;k<z;k++){
                scanf("%d",&a[i][j][k]);
            }
        }
    }

    printf("......................\n");
    for(i = 0;i<x;i++){
        for(j =0;j<y;j++){
            for(k =0;k<z;k++){
                printf("%d  ",a[i][j][k]);
            }
            printf(".\n");
        }
        printf("\n");
    }
    return 0;
}