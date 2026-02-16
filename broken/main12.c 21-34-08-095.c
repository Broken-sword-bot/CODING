#include <stdio.h>

int main() {
    int s[5] = {0};
    int max = 0;

    for(int i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &s[i]);
        
        // Move this INSIDE the loop
        if(s[i] > max) {
            max = s[i];
        }
    }

    printf("Maximum value is %d\n", max);
    return 0;
}