// Write a program to read and display n numbers using array 
#include<stdio.h>
int main(){
    int i,n,a[100];
    printf("Enter size of arrray <limit is 100 >");
    scanf("%d",&n);
    printf("Enter elemnent of array :\n");
    for(i = 0;i<n;i++){
        printf("\n arr[%d] = ",i);
    scanf("%d",&a[i]); 
}
for(i = 0;i<n;i++){
printf("The Elements are  = %d\n",a[i]);
}
    return 0;
}