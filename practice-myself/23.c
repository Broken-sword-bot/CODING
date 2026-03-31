// write a program to multiply two m * n matrice .
#include<stdio.h>
#include<stdlib.h>

int main(){
int i ,j,k ,m,n,x,y,a[100][100],b[100][100],c[100][100];

printf (" Enter size of row of matrix first : ");
scanf("%d",&m);
printf("Enter size of column of matrix first :");
scanf("%d",&n);
printf("Enter size of row matrix 2 : ");
scanf("%d",&x);
printf("Enter size of column of matrix 2 : ");
scanf("%d",&y);

if(n!=x){
    printf("Matrix multiplication is not possible .\n");
    exit(0);
}
else{
    printf("Enter elements of matrix first : \n");
    for(i =0;i<m;i++){
        for(j =0;j<n;j++)
        scanf("%d",&a[i][j]);
}
printf("Enter elements of matrix 2 : \n");
for(i =0;i<x;i++){
    for(j =0;j<y;j++)
    scanf("%d",&b[i][j]);
}
for(i =0;i<m;i++){
    for(j =0;j<y;j++){
        for(k =0;k<y;k++){
            c[i][j] += a[i][k] * b[k][j];
        }
    }
}
printf("After matrix multiplication :");
for(i =0;i<m;i++){
    for(j =0;j<y;j++){
        printf("%d  ",c[i][j]);
    }
    printf("\n");
    }
    }
    return 0;
}