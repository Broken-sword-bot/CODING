//write a program to read a 2d array marks which stores the marks of five student in theee subjects. 
// write a program to display the highest marks in each subject .
#include<stdio.h>
int main(){
    int i , j, row ,col,a[100][100];
    printf("Enter size of row : ");
    scanf("%d",&row);
    printf("Enter size of column : ");
    scanf("%d",&col);
    printf("Enter marks of five student in three subject each :\n ");
    for(i = 0;i<row;i++){
        for(j = 0;j<col;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i = 0;i<row;i++){
        printf("Mark obtained by student : %d\n",i+1);
        for(j = 0;j<col;j++){
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
    for(i = 0;i<col;i++){
        int max = a[0][0];
        for(j = 0;j<row;j++){
            if(max <a[j][i]){
                max = a[j][i];
            }
        }
        printf("Maximum in subject %d is  : %d\n",i+1,max);
    }
    return 0;
}