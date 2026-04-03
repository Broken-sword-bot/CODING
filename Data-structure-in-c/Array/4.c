#include<stdio.h>
#include<math.h>
int func1(){
    int i ,a[100],n,x;
    printf("Enter size of array :");
    scanf("%d",&n);
    printf("Enter element of array:\n");
    for(i =0;i<n;i++){
        scanf("%d",&a[i]);
    }
    x = a[1];
    a[1] = a[n-2];
    a[n-2] = x;
    printf("After swapping second element with second last element :\n");
    for(i =0;i<n;i++){
        printf("%d  ",a[i]);
    }
    return x;
}
void func2(){
    int i ,sum =0,x,a[200];
    printf("Enter size of array :");
    scanf("%d",&x);
    printf("Enter elements of array :\n");
    for(i = 0;i<x;i++){
    scanf("%d",&a[i]); 
    }
    for(i =0;i<x;i++){
        sum = sum + pow(a[i],2);
    }
    printf("Sum is  %d",sum );
}
void func3(){
    int i ,j ,x,y,sum =0,mean,a[100][100];
    printf("Enter size of row :");
    scanf("%d",&x);
    printf("Enter size of column");
    scanf("%d",&y);
    printf("Enter elements of array :\n");
    for(i = 0;i<x;i++){
        for(j = 0;j<y;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i =0;i<x;i++){
        for(j = 0;j<y;j++){
            sum += a[i][j];
        }
    }
    mean = sum/(x*y);
    printf("Sum is %d",sum);
    printf("Mean is %d",mean);
}
void func4(){
    int i ,j,n;
    printf("Enter size of Square ");
    scanf("%d",&n);
    for(i =0;i<n;i++){
        for(j =0 ;j<n;j++){
            printf("* ");
        }
        printf("\n");
    }
}
void func5(){
int i ,j ,n,a[100][100],sum=0;
printf("Enter size of matrix :");
scanf("%d",&n);
printf("Enter elments of array :\n");
for(i =0;i<n;i++){
    for(j =0;j<n;j++){
        scanf("%d",&a[i][j]);
    }
}
for(i = 0;i<j;i++){
    for(j = 0;j<n;j++){
        sum += a[i][j];
    }
}
printf("Sum of daigonal Matrix is : %d",sum);
}
void func6(){
    int i ,j ,n,a[100][100],prod = 1;
    printf("Enter size of matrix :");
    scanf("%d",&n);
    printf("Enter elements of matrix :\n");
    for(i = 0;i<n;i++){
        for(j =0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i =0;i<n;i++){
        for(j =0;j<n;j++){
            if(i<j){
                prod *= a[i][j];
            }
        }
    }
    printf("...................\n");
    printf("Product is %d",prod);
}
void func7(){
    int i ,j,x,y,count =0,a[100][100];
    printf("Enter size of row :");
    scanf("%d",&x);
    printf("Enter size of column :");
    scanf("%d",&y);
    printf("Enter elements of array :\n");
    for(i = 0;i<x;i++){
        for(j =0;j<y;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i =0;i<x;i++){
        for(j =0;j<y;j++){
            if(a[i][j] != 0)
            count++;
        }
    }
    printf("Total number of Non Zero elements is %d",count);
}
void func8(){
    int i ,j ,x,y,a[100][100],b[100][100],c[100][100];
    printf("Enter size of row : ");
    scanf("%d",&x);
    printf("Enter size of column : ");
    scanf("%d",&y);
    printf("Enter elments of matrix :\n");
    for(i =0;i<x;i++){
        for(j =0;j<y;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i = 0;i<x;i++){
        for(j =0;j<y;j++){
            if(a[i][j] % 2 == 0)
            b[i][j] = a[i][j];

            else 
                c[i][j] = a[i][j];
        }
    }
    printf("Even elements : \n");
    for(i =0;i<x;i++){
        for(j =0;j<y;j++){
            if(b[i][j] != 0)
                printf("%d  ",b[i][j]);
        }

    }
    printf("\nOdd elements : \n");
    for(i =0;i<x;i++){
        for(j =0;j<y;j++){
            if(c[i][j] != 0)
                printf("%d  ",c[i][j]);
        }

    }
}
void func9(){
    int i ,j ,x,y,a[100],b[100],c[100];
    printf("Enter size of array : ");
    scanf("%d",&x);
    printf("Enter elments of array :");
    for(i =0;i<x;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter size of array :");
    scanf("%d",&y);
    printf("enter elments of array :");
    for(i =0;i<y;i++){
        scanf("%d",&b[i]);
    }
    for(i =0;i<x;i++){
        c[i] = a[i];
    }
    for(i =0;i<y;i++){
        c[i+x] = b[i];
    }
    printf("After merge and reverse of array :\n");
    for(i =x+y-1;i>=0;i--){
        printf("%d\n  ",c[i]);
    }
}
void func10(){
 int i, j, k, x, y, z, a[10][10][10];
    
    // Cleaned up the input prompts for clarity
    printf("Enter number of rows (x): ");
    scanf("%d", &x);
    printf("Enter number of columns (y): ");
    scanf("%d", &y);
    printf("Enter size of height (z): ");
    scanf("%d", &z);
    
    printf("Enter elements of the 3D array:\n");
    for(i = 0; i < x; i++) {
        for(j = 0; j < y; j++) {
            for(k = 0; k < z; k++) {
                // BUG 1 FIXED: Changed [j] to [k]
                scanf("%d", &a[i][j][k]);
            }
        }
    }
    
    int menu;
    printf("\nEnter 1 for sum:\n");
    printf("Enter 2 for transpose:\n");
    printf("Enter 3 for product of matrix:\n");
    printf("Choice: ");
    scanf("%d", &menu);
    
    switch(menu) {
        case 1: {
            int sum = 0;
            for(i = 0; i < x; i++) {
                for(j = 0; j < y; j++) {
                    for(k = 0; k < z; k++) {
                        sum += a[i][j][k];
                    }
                }
            }
            printf("Sum is %d\n", sum);
            break;
        }
    
        case 2: {
            printf("Transpose:\n");
            for(k = 0; k < z; k++) {
                for(j = 0; j < y; j++) {
                    for(i = 0; i < x; i++) {
                        printf("%d  ", a[i][j][k]);
                    }
                    printf("\n");
                }
                printf("\n");
            }
            break;
        }
    
        case 3: {
            long long prod = 1;
            for(i = 0; i < x; i++) {
                for(j = 0; j < y; j++) {
                    for(k = 0; k < z; k++) { 
                        prod *= a[i][j][k];
                    }
                }
            }
            printf("Product is %lld\n", prod);
            break;
        }
        
        default: 
            printf("Outside menu, please enter correct number.\n");
            break;
    }
}
void func11(){
    int i ,j ,n ,sum = 0,sum1 = 0,sum2 =0, a[100][100];
    printf("Enter size of matrix :");
    scanf("%d",&n);
    printf("Enter elements of array :\n");
    for(i =0 ;i<n;i++){
        for(j =0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i =0;i<n;i++){
        for(j =0;j<n ;j++){
            if (i == j)
            sum+= a[i][j];
            
            else if (i<j){
                sum1 += a[i][j];
            }
            else {
                sum2 += a[i][j];
            }
        }
    }
    printf("Sum of daigonal element is %d\n",sum);
    printf("Sum of daigonal above element is %d\n",sum1);
    printf("Sum of below main daigonal element is %d\n",sum2);
    
}
int isuppertriangle(int a[100][100],int n){
    int i , j;
    for(i =0;i<n;i++){
        for(j =0;j<n;j++){
            if(i>j){
                if(a[i][j] != 0)
                return 0;
            }
        }
    }
    return 1;
}


int main(){
    int i,j ,n;
    int matrix[100][100];
    printf("Enter size of matrix :");
    scanf("%d",&n);
    printf("Enter elments of matrix :\n");
    for(i =0;i<n;i++){
        for(j =0;j<n;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    int result = isuppertriangle(matrix,n);
    if(result == 0){
        printf("its not a upper triangular matrix :");
    }
    else {
        printf("Its a upper triangular matrix :");
    }
    return 0;
}