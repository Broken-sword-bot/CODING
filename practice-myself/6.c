// write a program to find second largest of n numbers using an array .
#include<stdio.h>
int main(){
int i, large,a[100],size;
printf("Enter size of array : < limit 100 > ");
scanf("%d",&size);
printf("Enter elements of array :");
for(int i = 0;i<size;i++){
    scanf("%d",&a[i]);
}
int max = a[0];
for(i = 0;i<size;i++){
    if(max<a[i]){
        max = a[i];
    }
large = max ;

}
int sec_larg = a[0];
for(i = 0;i<size;i++){
    if(  sec_larg <a[i] && a[i]<large){
sec_larg = a[i];
    }
}
printf("Largest element is %d\n",large);
printf("Second largest element is %d ",sec_larg);
return 0;
}