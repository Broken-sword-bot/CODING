#include<stdio.h>
int main(){
    int i ,size , a[100], target , last_occ;
    printf("Enter size of array : ");
    scanf("%d",&size);
    printf("Enter elements of array : ");
    for(i =0;i<size;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the target you want to check occurence :");
    scanf("%d",&target);
    for(i = 0;i<size;i++){
        if(target == a[i]){
            last_occ = i;
        }
    }
    printf("Last occurence is at index  %d",last_occ);
    return 0;
}