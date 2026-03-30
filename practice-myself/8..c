// write a program to find whteather the array contains a duplicate numbeer.
#include<stdio.h>
int main(){
    int i,size,a[100],dup =0;
    printf("Enter the size of array : ");
    scanf("%d",&size);

    printf("Enter the elements of array : ");
    for(int i =0;i<size;i++){
        printf("\n The element is  ");
        scanf("%d",&a[i]);
    }
    for(i = 0;i<size ;i++){
        for(int j = 0;j<size;j++){
            if(a[i]== a[j]){
                dup++;
            }
        }
    }
    if(dup != 0)
    printf("Duplicate is avilable :");
    return 0;
}