#include<stdio.h>
int main(){
    int a[100] , size;
    printf("Enter size of array :");
    scanf(" %d",&size);
    for(int i = 0;i<size;i++){
        scanf(" %d",&a[i]);
    }
    int temp = a[0];
    for(int i = 0; i<size ;i++){  
        a[i] = a[i+1];
    }
   a[size-1] = temp;
printf("array after cycle shift :\n");
for(int i = 0;i<size;i++){
    printf("%d\n",a[i]);
}
}