// write a program to enter n numbers of digits. form a number using these digits 
#include<stdio.h>

int main() {
    int numbers = 0, size, i, digits[100];
    
    printf("\nEnter the number of digits: ");
    scanf("%d", &size);

    for(i = 0; i < size; i++) {
        printf("Enter the digit at position %d: ", i + 1);
        scanf("%d", &digits[i]);
        numbers = (numbers * 10) + digits[i]; 
    }
    
    printf("\nThe number is: %d\n", numbers);
    
    return 0;
}