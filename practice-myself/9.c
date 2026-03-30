// write a program to insert a number at a given location in a array.
#include<stdio.h>
int main(){
    int i ,size,pos,value,a[100];
    printf("Enter size of array : ");
    scanf("%d",&size);
    printf("enter the elements of array :");
    for(i = 0;i<size;i++){
        printf("\n arr[%d] ",i);
        scanf("%d",&a[i]);
    }
    printf("Enter the value you like to enter :");
    scanf("%d",&value);
    printf("Enter the postion where you like to enter the vaue :");
    scanf("%d",&pos);
    i = size-1;
    while(i>=pos){
        a[i+1] = a[i];
        i--;
    }
    size++;
    a[pos] =value;

    printf("After Addition of the elements ");
    for( i = 0;i<size;i++){
printf("%d\n",a[i]);
    }
    return 0;
}