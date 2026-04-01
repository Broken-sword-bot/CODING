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


int main(){
    func7();
    return 0;
}