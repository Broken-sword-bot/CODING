// write a program to merge two unsorted array 
#include<stdio.h>
int main(){
    int i ,size,a[20],b[20],c[20];
    printf("Enter size of array :");
    scanf("%d",&size);
    printf("Enter elements of 1st array :\n");
    for(i = 0;i<size;i++){
        printf("arr[%d] = ",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter elements of 2nd array :");
    for(i = 0;i<size;i++){
        printf("arr[%d] = ",size+i+1);
        scanf("%d",&b[i]);
    }
    for(i = 0;i<size;i++){
        c[i] = a[i];
        c[size+i] = b[i];
    }
    printf("After merging two array :\n");
    for(i = 0;i<2*size;i++){
        printf("Arr[%d] = %d\n ",i+1,c[i]);
    }
    return 0;
}