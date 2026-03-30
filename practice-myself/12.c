// write a program to delete a number from an array that is already sorted in the ascending order.
#include<stdio.h>
int main(){
    int i ,j,size,target,flag = 0 ,temp ,a[100];
    printf("Enter size of array :");
    scanf("%d",&size);
    printf("Enter elements of array :");
    for(int i = 0;i<size;i++){
        printf("\n arr[%d] = ",i+1);
        scanf("%d",&a[i]);
    }
    for(i = 0;i<size-1;i++){
        if(a[i]>a[i+1]){
            flag = 1;
            break;
        }
    }
    if(flag == 1){
        printf("Array is not sorted :");
    }
    else{
        printf("Enter the target you like to delete :");
        scanf("%d",&target);
        for(i = 0;i<size ;i++){
            if(a[i] == target){
                for(j = i;j<size;j++){
            a[j] = a[j+1];   }
            }
        }
        
        size--;

        printf("After deletion of elements :");
        for(i = 0;i<size;i++){
            printf("\n arr[%d] = %d",i+1,a[i]);
            
        }
    }
    return 0;
}