// Write a program to find the mean of n numbers 
#include<stdio.h>
int main(){
    int i ,n ,a[100],sum = 0;
    printf("Enter size of array ,limit is 100>");
    scanf("%d",&n);
    printf("Enter elements of array :");
    for(i = 0;i<n;i++){
        printf("\n arr[%d] = ",i);
        scanf("%d",&a[i]);
    }
    for(i = 0;i<n; i++){
        sum += a[i];
    }
    float  mean = sum/n;
    printf("The sum of array elemnt is %d\n ",sum);
    printf("The mean of array element of is %f ",mean);
    return 0;
}