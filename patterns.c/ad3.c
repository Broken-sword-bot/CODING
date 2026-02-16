#include<stdio.h>
void Arrays(int s[],int size ){
printf("Enter element of yur array :");
for(int i = 0;i<=size;i++){
    
    scanf("%d",&s[i]);
}
for(int i = 0;i<=size;i++){
    printf("%d\n",s[i]);
}

}
void FindMinMax(int s[],int size){
    
    printf("Enter element of array:");
    for(int i = 0; i<size;i++){
        scanf("%d",&s[i]);
    }
    int max = s[0] , min = s[0];
    for(int i = 0; i<size;i++){
        if(max<s[i]){
            max = s[i];
        }
        if(s[i]<min){
            min = s[i];
        }
    }
    printf("max is  %d\n",max);
        printf("min is  %d",min);
}
void Sum_Average(int s[],int size){
printf("Enter element of the array :");
for(int i = 0;i<size;i++){
    scanf("%d",&s[i]);
}
int sum = 0;
for(int i = 0;i<size;i++){
    sum = sum + s[i];
}
printf("Sum is %d\n",sum );
float average = sum/size ;
printf("Average is  %.2f",average);
}
void EvenOdd(int s[],int size){
    printf("Enter element of array :");
    for(int i = 0;i<size;i++){
        scanf("%d",&s[i]);
    }
    int even = 0, odd= 0;
    for(int i = 0;i<size;i++){
        if(s[i]%2==0)
        even++;
        else odd++;
    }
    printf("Even is  %d\n",even);
    printf("Odd is  %d",odd);
}
void PNZ(int s[],int size){
    printf("Enter elemnts of your array ");
    for(int i = 0;i<size;i++){
        scanf("%d",&s[i]);
    }
    int positive =0, negative = 0,zero = 0;
    for(int i = 0;i<size;i++){
        if(s[i]>0)
        positive++;
        else if(s[i]<0)
        negative++;
        else zero++;
    }
    printf("Positve is : %2d\n",positive);
    printf("negative is : %2d\n",negative);
    printf("zero is : %2d",zero);
}
void Smultiplication(int s[],int size){
printf("Enter elements of array :");
for(int i = 0;i<size;i++){
    scanf("%d",&s[i] );
}
int k;
printf("Enter the Number  of would like to Multiply :");
scanf("%d",&k);
for(int i = 0;i<size;i++){
   s[i] = s[i ]*k;
}
for(int i = 0;i<size;i++){
    printf("Element after multiply :%2d\n",s[i]);

}


}
void MaxSecondMax(int s[], int size){
printf("Enter element of array :");
for(int i = 0;i<size ;i++){
scanf("%d",&s[i]); 
}
int max = s[0];
int SecondMax = s[1];
for(int i = 1;i<size;i++){
    if(max <s[i]){
       SecondMax = max;
       max = s[i];
    }
} printf("max is %d\n",max);
     printf("Second Max is %3d",SecondMax);
}
void FrequencyCount(int s[],int size){
    printf("Enter element of array :");
    for(int i = 0; i<size ;i++){
        scanf("%d",&s[i]);
    }
    int target , count = 0;
    printf("Enter the target :");
    scanf("%d",&target);
    for(int i = 0;i<size;i++){
        if(target == s[i])count++;
    }
    printf("Frequency of a number is %2d",count);

}
void LinearSearch(int s[],int size){
    printf("Enter element of an array :");
    for(int i = 0;i<size;i++){
        scanf("%d",&s[i]);
    }
    int key;
    printf("Enter key you like to search : ");
    scanf("%d",&key);
    for(int i = 0;i<size;i++){
        if(key == s[i]){
            printf("key is found %d\n",i);
        }
        if(key == s[i]){
            printf("key index is found  %p\n",(void*)&s[i]);
        }
    }
}
void CheckSorted(int s[],int size){
    printf("Enter Elements of array :");
    for(int i = 0; i<size;i++){
        scanf("%d",&s[i]);
    }
    int count = 1 ;
    for(int i = 0;i<size;i++){
        if(s[i]>s[i+1]){
         count = 0;
         break;
        }
    }
    if(count)
    printf("In ascending order :");
    else printf("Not in Ascending order :");
}
void ArrayEquality(int s[],int size , int a[] ){
printf("Enter element of  first array :");
for(int i = 0; i<size;i++){
    scanf("%d",&s[i]);
}
printf("Element of second array ");
for(int i = 0;i<size ;i++){
    scanf("%d",&a[i]);
}
int count = 0;
for(int i = 0;i<size ;i++){
    if(s[i]!=a[i]){
        count++;
        break;
    }
}
if(count == 0)
printf("Arrays element is same :");
else printf("arrays is element is different :");
}
void CopyPaste(int s[],int size,int a[]){
    printf("Enter first arrays element :");
    for(int i = 0;i<size;i++){
        scanf(" %d",&s[i]);
    }
    for(int i = 0;i<size;i++){
         a[size-i -1]= s[i] ;
    } for(int i = 0;i<size;i++){
    printf(" %d\n",a[i]);
    }
}
int RemoveDuplicates(int s[], int size) {
    printf("Elemet of array is :");
    for(int i = 0; i<size;i++){
        scanf("%d",&s[i]);
    }
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (s[i] == s[j]) {
                for (int k = j; k < size - 1; k++) {
                    s[k] = s[k + 1];
                }
                size--;
                
                j--; 
            }
        }
    }
    for(int i = 0;i<size;i++){
        printf("Element is : %d\n",s[i]);
    }
    return size;
}
void CycleShift(int s[], int size){
    printf("Enter element of array is :");
    for(int i = 0; i<size ;i++){
        scanf("%d",&s[i]);
    }
int temp;
temp = s[size -1];
for(int i = size -2;i>=0;i--){
    
    s[i +1] = s[i];
}
 s[0] = temp;
printf("value after changed ");
for(int i = 0;i<size;i++){
    printf(" %d\n",s[i]);
}
}
void ArrayReversal(int s[],int size){
    printf("Enter arrays element :");
    for(int i = 0;i<size;i++){
        scanf("%d",&s[i]);
    } // bye darling 
    int temp = s[0];
    for(int i = 0; i<size;i++){
s[i] = s[size-i-1];
    }
    printf("values after changged : \n");
    for(int i = 0;i<size;i++){
        printf("%d\n",s[i]);
        s[size-1] = temp;
    }
}
void MergeArray(int s[],int size,int a[],int m[]){
    printf("Enter element of arrays :");
    for(int i = 0;i<size;i++){
        scanf("%d",&s[i]);
    }
    printf("enetr second array :"); // merge two arrays  ye bhi ho gaya ladle 
    for(int i = 0;i<size;i++){
        scanf("%d",&a[i]);
    }
    for(int i = 0;i<size;i++){
        m[i] = s[i];
        for(int j = 0;j<size;j++){
            m[size + j ] = a[j];
        }
    }
    printf("Enter value after merged : ");
    for(int i = 0;i<2*size;i++){
        printf("%d\n",m[i]);
    }
}
void SwapNeighbours(int s[],int size ){

    printf("Enter elements of array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &s[i]);
    }
    for (int i = 0; i < size - 1; i = i + 2) {
        int temp = s[i];      // Save the left neighbor
        s[i] = s[i + 1];      // right neighbor in left spot
        s[i + 1] = temp;      // saved left neighbor in right spot
    }

    printf("Array after swapping neighbors:\n");
    for (int i = 0; i < size; i++) {
        printf("%d\n", s[i]);
    }
}


  
int main(){
    int bc[200]; 
    int sc[200];
    int src[200];
    int mc[200];

    int sizes;
printf("Enter size of array :");
scanf("%d",&sizes);
SwapNeighbours(bc,sizes);
return 0;
}