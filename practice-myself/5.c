// write a program to print the postion of the smallest number using array 
#include<stdio.h>
int main(){
    int i , n,a[100];
    printf("Enter size of array <limit is 100 >");
    scanf("%d",&n);
    printf("Enter the elements ");
    for(i = 0;i<n;i++){
printf("\n arr[%d] = ",i);
scanf(" %d",&a[i]);
    } 
    int pos = 0, min = a[0];
    for(i = 1;i<n;i++){
        if(a[i]<min){
            pos = i;
            min = a[i];
        }
    }
    printf("the smallest element is %d in the position %d",min ,pos);
    return 0 ;
}
