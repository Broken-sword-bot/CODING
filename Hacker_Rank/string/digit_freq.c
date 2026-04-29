#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

char num[1000];
fgets(num,sizeof(num),stdin);


  for(int i = 0;i<=9;i++){
    int count = 0;
    for(int j = 0;j<num[j] != '\0';j++){
        if(i + '0'==num[j])
            count++;
    }
    printf("%d ",count);
  }
    return 0;
}