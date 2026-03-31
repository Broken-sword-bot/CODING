// - Consider an array MARKS [20] [5] which stores the marks obtained by 20 students in 5 subjects. Now
// write a program to
// (a) find the average marks obtained in each subject.
// (b) find the average marks obtained by every student.
// (c) find the number of students who have scored below 50 in their average.
// (d) display the scores obtained by every student.
#include<stdio.h>
int main(){
    int i ,j,x,y,avg = 0,a[100][100];
    printf("Enter size of row : ");
    scanf("%d",&x);
    printf("Enter size of column : ");
    scanf("%d",&y);
    printf("Enter elements of %dx%d matrix ",x,y);
    for(i =0;i<x;i++){
        printf("%d student marks in 5 subject : ",i+1);
        for(j =0;j<y;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i = 0;i<y;i++){
        int sum =0;
        for(j =0;j<x;j++){
            sum+= a[i][j];
        }
        avg = sum/x;
        printf("Avergae marks obtained by student in %d  subject is %d",i+1,avg);
    }
    for(i =0;i<x;i++){
        int sum =0;
        for(j =0;j<y;j++){
            sum += a[i][j];
        }
        avg = sum/y;
        printf("Average marks obtained by student %d is %d\n",i+1,avg);
        if(avg<50){
            printf("This student average is below 50 :\n");
        }
    }
    for(i =0;i<x;i++){
        printf("Marks obtained by studnet %d is ",i+1);
        for(j =0;j<y;j++){
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}