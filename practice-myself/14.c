// write a  program to merge two sorted array 
#include<stdio.h>
int main(){
    int size1,size2,merge,a[100],b[100],c[100],index = 0,first = 0,second= 0,i;
printf("Enter size of first array : ");
scanf("%d",&size1);
printf("Enter elements of array first :");
for(i = 0;i<size1;i++){
printf("arr[%d] = ",i+1);
    scanf("%d",&a[i]);
}
printf("enter size of second array :");
scanf("%d",&size2);
printf("Enter elements of second array :");
for(i = 0;i<size2;i++){
    printf("array[%d] = ",size1+i+1);
    scanf("%d",&b[i]);
}
merge = size1+ size2;
while(first<size1&&second<size2){
    if(a[first]<b[second]){
        c[index] = a[first];
        first++;
    }
    else{
        c[index] = b[second];
        second++;
    }
    index++;
}
if(first==size1){
    while(second<size2){
        c[index] = b[second];
        second++;
        index++;
    }
}
else if (second == size2){
    while(first<size1){
        c[index] = a[first];
        first++;
        index++;
    }
}
printf("After merge of array :\n");
for(i = 0;i<merge;i++){
    printf("\n%d",c[i]);
}
return 0;

}