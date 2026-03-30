// write a program to display an array of given numbers 
#include<stdio.h>
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int *ptr , *ptr2;
    ptr = arr;
    ptr2 = &arr[8];
    while(ptr<=ptr2){
        printf("%d\n",*ptr);
        ptr++;
    }
    return 0;
}