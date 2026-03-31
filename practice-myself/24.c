// write a program to fill square with zero value on daigonals 1 on the upper right triangle and -1 in lower left triangle .
#include<stdio.h>
int main(){
    int i ,j ,m,a[100][100],b[100][100];
    printf("Enter size of row and column : ");
    scanf("%d",&m);

    printf("Enter elements of %dx%d Matrix : \n",m,m);
    for(i =0;i<m;i++){
        for(j =0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i =0;i<m;i++){
        for(j =0;j<m;j++){
            if(i==j)
                a[i][j] = 0;
            else if (i>j)
                a[i][j] = -1;
            else 
                a[i][j] = 1;
        }
    }
    printf("......................\n");
    for(i =0;i<m;i++){
        for(j =0;j<m;j++)
        printf("%d  ",a[i][j]);
        printf("\n");
    }
    return 0;
}