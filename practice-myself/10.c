// write a program to insert a number in an array that is already sorted in ascendding order 
#include<stdio.h>
int main(){
    int i ,temp =0,size,value,a[100] ,flag = 0;
    printf("Enter size of array :");
    scanf("%d",&size);
    printf("Enter elements of array :");
    for(i = 0;i<size;i++){
        printf("\n arr[%d] ",i+1);
        scanf("%d",&a[i]);
    }
    for(i = 0;i<size;i++){
        if(a[i]>a[i+1]){
            flag = 1;
            break;
        }
    }
if(flag==1){
    printf("its not in ascending order :");
}
else{
    printf("Enter the value :");
    scanf("%d",&value);
    i = size-1;
    while(a[i]>value){
a[i+1] = a[i];
temp = i;
i--;
    }
    size = size+1;
    a[temp] = value;

    printf("After the addition of elements : ");
    for(i = 0;i<size;i++){
        printf("%d\n",a[i]);
    }
}
    return 0;
}