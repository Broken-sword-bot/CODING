#include<stdio.h>
int main(){
    int i , size , a[100] ,target ;
    printf("enter size of array :");
    scanf("%d",&size);
    printf("Enter elments of array :");
    for(i = 0;i<size;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter target which will be used to check occurence : ");
    scanf("%d",&target);

    for(i = 0;i<size;i++){
        if(target == a[i]){
            printf("First occurence is at index %d" ,i);
            break;
        }
    }
    return 0;
}