#include<stdio.h>
int main(){
    int breadth , height ;
    printf("Enter breadth :");
    scanf("%d",&breadth );
    printf("Enter height :");
    scanf("%d",&height);

    int areaoftriangle = (0.5*(breadth * height));
    printf("Area of triangle is %d",areaoftriangle);
    return 0;
}