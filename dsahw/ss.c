#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
int BubbleSort(int a[],int size){
printf("Enter elements of array :");
for(int i = 0;i<size;i++){
    scanf("%d",&a[i]);
}
for(int i = 0;i<size;i++){
    for(int j = i+1;j<size;j++){ 
        if(a[i]>a[j]){ // bubble sort logic 😇😇😇
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
}
printf("Array after sorting is completed :\n");
for(int i = 0;i<size;i++){
    printf("%d\n",a[i]);
}
return 0;
}
int ImplementionSort(int a[],int size){
    printf("Enter elemnts of first array :");
    for(int i = 0;i<size;i++){
        scanf("%d",&a[i]);
    }
    for(int i = 0;i<size - 1;i++){
        int minIndex = i;
        for(int j = i+1;j<size;j++){
            if(a[j]<a[minIndex]){
                minIndex = j;
            }
        }
        int temp = a[minIndex];
        a[minIndex] = a[i];
        a[i] = temp;
    }
    printf("Value after Sorting has been completed :\n");
    for(int i = 0;i<size;i++){
        printf("%d\n",a[i]);
    }
    return 0 ;
}
int SlectionSort(int a[],int size){
    printf("Enter elements of array :\n");
    for(int i = 0;i<size;i++){
        scanf("%d",&a[i]);
    }
    for (int i = 1; i < size; i++) {
        
        int key = a[i]; 
        int j = i - 1;   
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j]; 
            j--;                 
        }
        a[j + 1] = key;
    }
    printf("value after soeting has done :\n");
    for(int i = 0;i<size;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}

int main(){
    int sizes,firstarray[10];
    printf("Enter size of array :");
    scanf("%d",&sizes);
    SlectionSort(firstarray,sizes);
}