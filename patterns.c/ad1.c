#include<stdio.h>
#include<stdlib.h>
void RightAngleTriangle(){
    int n;
    printf("scope of your Triangle\n");
    scanf("%d",&n);
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
}
void SquareBlock(){
    int n; 
    printf("Enter scope of your Square :");
    scanf("%d",&n);
    for(int i = 1; i<=n;i++){
        for(int j = 1; j<=n;j++){
            printf("*");
        }
        printf("\n");
    }
}
void HollowSquare(){
int n;
scanf("%d",&n);
printf("Enter scope of your Hollow Square :\n");
for(int i = 1 ; i<=n;i++){
    for(int k = 1; k<=n;k++){
        if(i== 1|| k==1 ||i == n||k==n){
            printf("*");
        }
        else printf(" ");
    }
    printf("\n");
}
}
void NumberRow(){
    int n;
    printf("Enter Scope of your row ;\n");
    scanf("%d",&n);

    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i;j++){
            printf("%d",i);
        }
        printf("\n");
    }
}
void NumberColumn(){
int n; 
printf("Enter scope of your column : \n");
scanf("%d",&n);

for(int i = 1; i<=n; i++){
    for(int j = 1; j<=i; j++){
        printf("%d",j);
    }
    printf("\n");
}
}
void AlphabetStaircase(){
    int n;
char s[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N'};
printf("Enter scope of your ladder :\n");
scanf("%d",&n);
for(int i = 0; i<14;i++){
    for(int j = 0; j<=i;j++){
        printf("%c",s[j]);
    }
    printf("\n");
}
}
void InvertedTriangle(){
    int n;
    printf("Enter scope of inverted triangle : \n");
    scanf("%d",&n);
    for(int i = n ; i>0;i--){
        for(int j =1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
}
void MirroredTriangle(){
    int n;
    printf("Enter scope your Mirrored Triangle :\n");
    scanf("%d",&n);
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n-i;j++){
            printf(" ");
        }
        for(int j = 1; j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}
void InvertedMirroredTriangle(){
    int n;
    printf("Enter scope of your inverted Triangle mirrored one :\n");
    scanf("%d",&n);
    for(int i = n;i>0;i--){
        for(int j=1; j<=n-i;j++){
            printf(" ");
        }
        for(int j = 1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
}
void FloyedTriangle(){
    int n;
    printf("Enter scope of your Floyed triangle :\n");
    scanf("%d",&n);
     int count = 1;
    for(int i= 1; i<=n;i++){
        for(int j = 1;j<=n-i;j++){
            printf(" ");
        }
        for(int j = 1; j<=i;j++){
            printf("%d",count);
            count++;
        }
        printf("\n");
    }
}
void BinaryTriangle(){
int n;
printf("Enter scope of your Binary Triangle :\n");
scanf("%d",&n);
for(int i = 1; i<=n;i++){
    for(int j =1; j<=n-i;j++){
        printf(" ");
    }
    for(int j = 1;j<=i;j++){
        printf("%d",j%2);
    }
    printf("\n");
    }
}
void TheX(){
    int n; 
    printf("Enter scope of your x :\n");
    scanf("%d",&n);
    for(int i = 1; i<=n;i++){
        for(int j = 1; j<=n; j++){
            if(i==j || i+j == n+1)
            printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}
void FullPyramid(){
    int n;
    printf("Enter size of your Pyramid :\n");
    scanf("%d",&n);
    for(int i =  1;i<=n;i++){
        for(int j = 1; j<=n-i;j++){
            printf(" ");
        }
        for(int j = 1; j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
}
void InvertedPyramid(){
int n;
printf("Enter size of your Inveted pyramid :\n");
scanf("%d",&n);
for(int i = n; i>0; i--){
    for(int j = 1; j<=2*n-i;j++){
        printf(" ");
    }
    for(int j = 1; j<=2*i-1;j++){
        printf("*");
    }
    printf("\n");
}
}
void SolidDaimond(){
    int n;
    printf("Enter size of your Daimond :\n");
    scanf("%d",&n);
    // for(int i = 1;i<=n;i++){
    //     for(int j =1; j<=n-i; j++){
    //         printf(" ");
    //     }
    //     for(int j = 1; j<=2*i-1;j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    // for(int i = n-1; i>0;i--){
    //     for(int j = 1; j<=n-i;j++){
    //         printf(" ");
    //     }
    //     for(int j = 1; j<=2*i-1;j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }
for(int i = 1; i<=2*n-1; i++){
    for(int j = 1; j<=2*n-1;j++){
    if(abs(n-i)+ abs(n-j) <= n-1){
        printf("*");
    }
    else printf(" ");
    }
    printf("\n"); } 
}
void HollowDaimond(){
    int n;
    printf("Enter scope of your Hollow Daimond :\n");
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n-i;j++){
            printf(" ");
        }
        for(int j = 1; j<=2*i-1;j++){
            if(j == 1 || (2*i-1) == j){
                printf("*");
            }
            else printf(" ");
        }
        printf("\n");
    }
    for(int i = n-1; i>0;i--){
        for(int j = 1; j<=n-i;j++){
            printf(" ");
        }
        for(int j = 1; j<=2*i-1;j++){
            if(j == (2*i-1) || j == 1){
                printf("*");
            }
            else printf(" ");
        }
        printf("\n");
    }
    for(int i = n;i<2*n-1;i++){
        for(int j = 1; j<=2*n-1;j++){
            if(abs(n-i) + abs(n-j) == n-1){
                printf("*");
            }
            else printf(" ");
        }
        printf("\n");
    }
}
void PlaindromePyramid(){
    int n; 
    printf("Enter scope of your plaindrome Pyramid :\n");
    scanf("%d",&n);
    for(int i = 1; i<=n;i++){
        for(int j = 1; j<=n-i;j++){
            printf(" ");
        }
        for(int j = 1; j<=i;j++){
            printf("%d",j);
        }
        for(int j = i-1;j>0;j--){
            printf("%d",j);
        }
        printf("\n");
    }
}
void PascalTriangle(){
    int n;
    printf("Enter pascal trinagl no rows :\n");
    scanf("%d",&n);
    for(int i = 1; i<=n;i++){
        int count = 1;
        for(int j = 1; j<=n-i;j++){
            printf(" ");
        }
        for(int j = 1; j<=i;j++){
            printf("%d",count);
            count = count *(i-j)/j;
            printf(" ");
        }
        printf("\n");
    }
}
void Butterfly(){
    int n;
    printf("Enter scope of your butterfly :\n");
    scanf("%d",&n);
    for(int i = 1; i<=n;i++){
        for(int j = 1; j<=i;j++){
            printf("*");
        }
        for(int j = 1; j<=2*(n-i);j++){
            printf(" ");
        }
        for(int j = 1; j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i = n-1;i>0;i--){
        for(int j = 1; j<=i;j++){
            printf("*");
        }
        for(int j = 1; j<=2*(n-i);j++){
            printf(" ");
        }
        for(int j = 1; j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}

int main(){
    int choices;
printf("Enter 1 for Right angle triangle :\n");
printf("Enter 2 for square Block :\n");
printf("Enter 3 for Hollow square :\n");
printf("Enter 4 for Number row:\n");
printf("Enter 5 for Number coloumn :\n");
printf("Enter 6 for Alphabet Stircase :\n");
printf("Enter 7 for Inverted Triangle :\n");
printf("Enter 8 foMirrored triangle :\n");
printf("Enter 9 for Inverted Mirrored Angle Triangle  :\n");
printf("Enter 10 for Floyed Triangle  :\n");
printf("Enter 11 for Binary Triangle :\n");
printf("Enter 12 for the X :\n");
printf("Enter 13 for Full Pyramid  :\n");
printf("Enter 14 for Inverted Pyramid  :\n");
printf("Enter 15 for solid daimond  :\n");
printf("Enter 16 for Hollow Daimond :\n");
printf("Enter 17 for plaindrome pyarmid  :\n");
printf("Enter 18 for pascals pyramid  :\n");
printf("Enter 19 for butterfly  :\n");
scanf("%d",&choices);
switch(choices){
    case 1 : RightAngleTriangle();
                break;
    case 2 : SquareBlock();
                break;      
    case 3 : HollowSquare();
    break;   
    case 4 : NumberRow();
    break;
    case 5 :NumberColumn();
    break;
    case 6 : AlphabetStaircase();
    break;
    case 7 : InvertedTriangle();
    break;        
    case 8 : MirroredTriangle();
    break; 
    case  9 : InvertedMirroredTriangle();
    break;
    case 10 : FloyedTriangle();
    break ;
    case 11 : BinaryTriangle();
    break;
    case 12 : TheX();
    break;
    case 13 : FullPyramid();
    break;
    case 14 : InvertedPyramid();
    break;
    case 15 : SolidDaimond();
    break ; 
    case 16 : HollowDaimond();
    break;
    case 17 : PlaindromePyramid();
    break;
    case 18 : PascalTriangle();
    break;
    case 19 : Butterfly();
    break ;
    default : printf("Invalid Choice :");
    break;
}

    return 0;
}