#include<stdio.h>

int islowertiangle(int a[100][100],int n){
int i ,j;
for(i =0;i<n;i++){
    for(j =0;j<n;j++){
        if(i<j){
            if(a[i][j != 0]){
                return 0;
            }
        }
    }
}
return 1;
}
int main(){
int i ,j ,n;
int matrix[100][100];
printf("Enter size of matrix :");
scanf("%d",&n);
printf("Enter elments of matrix :\n");
for(i =0;i<n;i++){
    for(j= 0;j<n;j++){
        scanf("%d",&matrix[i][j]);
    }
}
int result = islowertiangle(matrix,n);
if(result == 1){
    printf("its lower triangle matix :");
}
else printf("Its not a lower triangle matrix :");
return 0;
}