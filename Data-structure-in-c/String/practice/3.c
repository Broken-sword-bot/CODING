#include<stdio.h>

int main(){
    char dest_str[1000], source_str[1000];
    int i = 0 , j = 0;
    
    printf("\n Enter the source string : "); 
    fgets(source_str, sizeof(source_str), stdin);
    
    printf("Enter the destination string : ");
    fgets(dest_str, sizeof(dest_str), stdin);

    

    while (dest_str[i] != '\0') {
        if (dest_str[i] == '\n') {
            break; 
        }
        i++;
    }
    while(source_str[j] != '\0' && source_str[j] != '\n'){
            dest_str[i] = source_str[j];
            i++; 
            j++; 
    }
        

    dest_str[i] = '\0';
    
    printf("\n After the append of strings : ");
    puts(dest_str); 
    return 0;
}