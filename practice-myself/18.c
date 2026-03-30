// in a small company there are five salesman . each salesman is suppossed to sell three products .
// write a program using 2d array to print (i) the total sales by each salesman  (ii) total sales by each team.
#include<stdio.h>
int main(){
    int i , j,a[100][100],row ,col,team = 0;
    printf("Enter size of row : ");
    scanf("%d",&row);
    printf("Enter size of column :  ");
    scanf("%d",&col);
    for(i = 0;i<row;i++){
        for(j = 0;j<col;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("...............................\n");
    for(i = 0;i<row;i++){
        int total_sales = 0;
        for(j = 0;j<col;j++){
            total_sales += a[i][j];
        }
        printf("\nTotal sales =  %d",total_sales);
        printf("\n");
    }
    for(i = 0;i<col;i++){
        team = 0;
        for(j = 0;j<row;j++){
            team += a[j][i];
        }
        printf("\n total sales of item  %d = %d\n",i+1,team);
    }
    return 0;
}