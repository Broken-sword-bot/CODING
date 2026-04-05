#include <stdio.h>
#include <stdlib.h> 
int main()
{
    char str[100];
    int i = 0, length; 


    system("clear"); 
    printf("\n Enter the string : ");

    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0' && str[i] != '\n')
    {
        i++;
    }
    
    length = i;
    
    printf("\n The length of the string is : %d\n", length);

    return 0;
}