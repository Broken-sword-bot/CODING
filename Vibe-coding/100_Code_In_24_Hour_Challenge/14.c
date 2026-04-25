#include<stdio.h>
int main(){
    int length , breadth ;
    printf("Enter length : ");
    scanf("%d",&length);
    printf("Enter breadth : ");
    scanf("%d",&breadth);

    int perimeter = (2 * (length + breadth));

    printf("Perimeter is %d",perimeter);
    return 0;
}