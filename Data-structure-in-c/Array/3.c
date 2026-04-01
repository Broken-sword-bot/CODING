#include<stdio.h>
int main(){
    int i ,j,n,a[1000],pair =0;
    printf("Enter size of array :");
    scanf("%d",&n);
    printf("Enter elements of array :");
    for(i =0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i =0;i<n;i++){
        for(j = 0;j<n;j++){
            if(a[i]+a[j] == 50){
                printf("(%d  %d)",a[i],a[j]);
                printf("\n");
            }
            else {
                pair++;
            }
        }
    }
    if(pair ==1)
    printf("Not any pairs :");
    return 0;
}