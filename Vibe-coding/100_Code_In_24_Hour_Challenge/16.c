#include <stdio.h>
#include <math.h> 

int main() {
    double a, b, c, s, area; 

    printf("Enter value of a: ");
    scanf("%lf", &a); 
    
    printf("Enter value of b: ");
    scanf("%lf", &b);
    
    printf("Enter value of c: ");
    scanf("%lf", &c);

    
    s = (a + b + c) / 2.0; 

    area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("Area of triangle by Heron's formula is %.2lf\n", area);
    
    return 0;
}