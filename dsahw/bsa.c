#include<stdio.h>
#include<limits.h>
void DeclareArray(int a[]){
   // int a[10];  
}
void ReadElements(int a[],int size){
    printf("Enter Elemnt of array :");
    for(int i = 0;i<size;i++){
        scanf("%d",&a[i]); // its for reading the elements 
    }
    for(int i = 0;i<size;i++){
        printf("%d\n",a[i]);
    }
}
void SumElemnts(int a[],int size){
    printf("Enter elements of array :");
    for(int i = 0;i<size;i++){
        scanf("%d",&a[i]);
    }
    int sum = 0;
    for(int i = 0;i<size;i++){
        sum = sum + a[i];
    }
    printf("Sum is %4d",sum);
}
void AverageArray(int a[],int size){
    printf("Enter elements of array :");
    for(int i = 0;i<size;i++){
        scanf("%d",&a[i]);
    }
    float Avg;
    int sum = 0;
    for(int i = 0; i<size;i++){
        sum = sum + a[i];
        Avg = sum/size;
    }
    printf("Sum is %2d\n",sum);
    printf("Average is %.2f\n",Avg);
}
void MaximumElement(int a[],int size){
    printf("Enter elemnts of array :");
    for(int i = 0;i<size;i++){
        scanf("%d",&a[i]);
    }
    int max = a[0];
    for(int i = 0;i<size;i++){
        if(max<a[i]){
         max = a[i];  
        }
    }
    printf("Maximum Element is :%2d",max);
}
void MinimumElements(int a[],int size){
printf("Enter elements of array :");
for(int i = 0; i<size;i++){
    scanf("%d",&a[i]);
}
int min = a[0];
for(int i = 0;i<size;i++){
    if(a[i]<min){
        min = a[i];
    }
}
printf("Minumum is %2d",min);
}
void CountEvenOdd(int a[],int size){
    printf("Enter elements of array :");
    for(int i = 0;i<size;i++){
        scanf("%d",&a[i]);
    }
    int odd = 0, even = 0;
    for(int i = 0;i<size;i++){
        if(a[i]%2 ==0)
        {even++;}
        else {odd++;}
    }
    printf("Total Even no is %d\n",even);
    printf("Total Odd no is %d\n",odd);
}
void LinearSearch(int a[],int size){
    printf("Enter elemnts of array :");
    for(int i = 0;i<size;i++){
        scanf("%d",&a[i]);
    }
    int target ;
    printf("Enter number you want to search :");
    scanf("%d",&target);
    for(int i = 0;i<size;i++){
        if(target == a[i]){
            printf("Found %d\n",a[i]);
        }
    }
}
void ReverseArray(int a[],int size,int b[]){
    printf("Enter elements of array :");
    for(int i = 0; i<size;i++){
        scanf("%d",&a[i]);
    }
    for(int i = 0;i<size;i++){
      b[size-i-1 ]  = a[i];
    }
}
void ReverseArrayElements(int a[],int size,int b[]){
printf("Enter elements of array :");
for(int i = 0; i<size;i++){
    scanf("%d",&a[i]);
}
for(int i = 0;i<size;i++){
    b[size-i-1] = a[i];
}
printf("Array after reversed :");
for(int i = 0;i<size;i++){
    printf("%d\n",b[i]);
}
}
void CopyElement(int a[],int size,int b[]){
printf("Enter elements of array :");
for(int i = 0;i<size;i++){
    scanf("%d",&a[i]);
}
for(int i = 0;i<size;i++){
    b[i] = a[i];
}
}
void CountPositiveNegative(int a[],int size){
printf("Enter elements of array :");
for(int i = 0;i<size;i++){
    scanf("%d",&a[i]);
}
int positive = 0, negative = 0,zero = 0;
for(int i = 0;i<size;i++){
if(a[i]>0){
    positive++;
}
else if(a[i] == 0){
    zero++;
}
else {
    negative++;
}
}
printf("Positive Count is %d\n",positive);
printf("Negative count is %d\n",negative);
printf("Zero count is  %d",zero);
}
void FrequencyNumber(int a[],int size){
printf("Enter elements of array :");
for(int i = 0;i<size;i++){
    scanf("%d",&a[i]);
}
// not able to solve 
}
void SecondLargest(int a[],int size){
// nahi bana hai abhi 
}
void SwapFirstLast(int a[],int size){
printf("Enter elements of array :");
for(int i = 0; i<size;i++){
    scanf("%d",&a[i]);
}
int temp = a[0];
a[0] = a[size - 1];
a[size-1] = temp;
printf("Array after first and last element is swaped :");
for(int i = 0;i<size;i++){
    printf("%d\n",a[i]);
    }
}
void ArraySorted(int a[],int size){
    printf("Enter element of array :");
    for(int i = 0;i<size;i++){
        scanf("%d",&a[i]);
    }
    int count = 0;
    for(int i = 0;i<size;i++){
        if(a[i]>a[i+1]){
            count = 1;
            break;
        }
    }
    if(count) printf("Array is sorted :");
    else printf("Array is not sorted :");

}
void MergeArray(int a[], int size, int b[], int c[]){
    printf("Enter elements of first  array :");
    for(int i = 0;i<size;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter elements of second array :");
    for(int i = 0;i<size;i++){
        scanf("%d",&b[i]);
    }
    for(int i = 0;i<2*size-1;i++){{
         c[i] = a[i];
         for(int j = 1;j<size;j++){
         c[size +j] = b[j];}

    }
    printf("after merged :");
    for(int i = 0;i<2*size;i++){
        printf("%d\n",c[i]);
    }
}

}
void SpecificPosition(int a[],int size){
    printf("Enter elements of array :");
    for(int i = 0;i<size;i++){
        scanf("%d",&a[i]);
    }
    int pos ,value;
    printf("Enter the postion in which you would like to enter your number :");
    scanf("%d",&pos);
    printf("Enter the value want in that position : ");
    scanf("%d",&value);
    for(int i = size-1;i>=pos-1;i--){
       a[i+1] = a[i]; 
    } 
    a[pos-1] = value;
    size++; 
    printf("Value after position is added :");
    for(int i = 0;i<size;i++){
        printf("%d\n",a[i]);
    }
}
void DeleteElement(int a[],int size){
printf("Enter element of array :");
for(int i = 0;i<size;i++){
    scanf("%d",&a[i]);
}
int pos;
printf("Enter the position you would like to delete :");
scanf("%d",&pos);
for(int i = pos-1;i<size-1;i++){
    a[i] = a[i+1];
}
size--;
printf("Value after chaned :\n");
for(int i = 0;i<size;i++){
    printf("%d\n",a[i]);
}
}
void ReplaceNegative(int a[],int size){
printf("Enter element of array :");
for(int i = 0;i<size;i++){
    scanf("%d",&a[i]);
}
for(int i = 0;i<size;i++){
    if(a[i]<0){
        a[i] = 0;
    }
}
printf("Value after changed :\n");
for(int i = 0;i<size;i++){
    printf("%d\n",a[i]);
}
}
void MultiplyElement(int a[],int size){
printf("Enter elements of array :");
for(int i = 0;i<size;i++){
    scanf("%d",&a[i]);
}
int mul;
printf("Enter the number by how much you would like to multiply :");
scanf("%d",&mul);
for(int i = 0;i<size;i++){
    a[i] = a[i]*mul;
}
printf("Values after multiplication :\n");
for(int i = 0;i<size;i++){
    printf("%d\n",a[i]);
}
}
void AlternateElements(int a[],int size){
    printf("Enter elements of array :");
    for(int i = 0;i<size;i++){
        scanf("%d",&a[i]);
    }
    printf("Alternation element \n");
    for(int i = 0;i<size;i += 2){
        printf("%d\n",a[i]);
    }
}
void DuplicateElements(int a[],int size){
    printf("Enter elements of array :\n");
    for(int i = 0;i<size;i++){
        scanf("%d",&a[i]);
    }
    for(int i = 0;i<size;i++){
        for(int j = i+1;j<size;j++){
        if(a[i] == a[j]){
            for(int k = j;k<size-1;k++){
                a[k] = a[k+1];
            }
            size--;
            j--;
            }
        }
    }
    printf("After deleting  duplicates :\n");
    for(int i = 0;i<size;i++){
        printf("%d\n",a[i]);
    }
}
void FindNumbeerDuplicate(int a[],int size){
// printf("Enter elements of array :");
// for(int i = 0;i<size;i++){
//     scanf("%d",&a[i]);
// }
// int count = 0;
// for(int i = 0;i<size;i++){
//     for(int j = i + 1; i<size;i++){
//         if(a[i] == a[j]){
//             for(int k = j;k<size --;k++){
//                 a[k] = a[k+1];count++;
//                }
//                size--;
//                j--;
//           }
//     }
// }
// printf("Count of Duplicate Number is : %d",count);
}

int main(){
    int sizes,firstarray[100],secondarray[100],thirdarray[100];
    
    printf("Enter size of array : ");
    scanf("%d",&sizes);
    FindNumbeerDuplicate(firstarray,sizes);
    return 0;
}