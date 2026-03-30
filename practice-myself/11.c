// write a program to delete an element from given location .
#include<stdio.h>
int main(){
    int i ,size,pos,a[100];
    printf("Enter size of array : ");
    scanf("%d",&size);
    printf("Enter the elements of array :");
    for(i = 0;i<size;i++){
        printf("\n arr[%d] = ",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter the position where you would like to remove element :");
    scanf("%d",&pos);

    for(i = pos-1;i<size;i++){
        a[i] = a[i+1];
    }
    size--;
    printf("After deletion of elements :\n");
    for(i = 0;i<size;i++){
        printf("arr[%d] = ",i+1);
        printf("%d\n",a[i]);
    }
    return 0;
}