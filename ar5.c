#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("newTest.txt","r");
    if(fptr == NULL){
        printf("File Doesnt Exist :");
    } else {
        fclose(fptr);
    }
return 0;
}