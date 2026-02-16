#include<stdio.h>
#include<stdlib.h>
void RightAngleTriangle(int n,char symbol){
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            printf("%c",symbol);
        }
        printf("\n");
    }
}
void SquareBlock(int n,char symbol){
    for(int i = 1; i<=n;i++){
        for(int j = 1; j<=n;j++){
            printf("%c",symbol);
        }
        printf("\n");
    }
}
void HollowSquare(int n,char symbol){
for(int i = 1 ; i<=n;i++){
    for(int k = 1; k<=n;k++){
        if(i== 1|| k==1 ||i == n||k==n){
            printf("%c",symbol);
        }
        else printf(" ");
    }
    printf("\n");
}
}
void NumberRow(int n){
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
void AlphabetStaircase(int n){
char s[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N'};
printf("Enter scope of your ladder :\n");
for(int i = 0; i<n;i++){
    for(int j = 0; j<=i;j++){
        printf("%c",s[j]);
    }
    printf("\n");
}
}
void InvertedTriangle(int n,char symbol){
    for(int i = n ; i>0;i--){
        for(int j =1; j<=i; j++){
            printf("%c",symbol);
        }
        printf("\n");
    }
}
void MirroredTriangle(int n, char symbol){
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n-i;j++){
            printf(" ");
        }
        for(int j = 1; j<=i;j++){
            printf("%c",symbol);
        }
        printf("\n");
    }
}
void InvertedMirroredTriangle(int n,char symbol){
    for(int i = n;i>0;i--){
        for(int j=1; j<=n-i;j++){
            printf(" ");
        }
        for(int j = 1; j<=i; j++){
            printf("%c",symbol);
        }
        printf("\n");
    }
}
void FloyedTriangle(int n){
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
void BinaryTriangle(int n){
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
void TheX(int n,char symbol){
    for(int i = 1; i<=n;i++){
        for(int j = 1; j<=n; j++){
            if(i==j || i+j == n+1)
            printf("%c",symbol);
            else printf(" ");
        }
        printf("\n");
    }
}
void FullPyramid(int n , char symbol){
    for(int i =  1;i<=n;i++){
        for(int j = 1; j<=n-i;j++){
            printf(" ");
        }
        for(int j = 1; j<=2*i-1;j++){
            printf("%c",symbol);
        }
        printf("\n");
    }
}
void InvertedPyramid(int n,char symbol){
for(int i = n; i>0; i--){
    for(int j = 1; j<=2*n-i;j++){
        printf(" ");
    }
    for(int j = 1; j<=2*i-1;j++){
        printf("%c",symbol);
    }
    printf("\n");
}
}
void SolidDaimond(int n,char symbol){
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
        printf("%c",symbol);
    }
    else printf(" ");
    }
    printf("\n"); } 
}
void HollowDaimond(int n, char symbol){
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n-i;j++){
            printf(" ");
        }
        for(int j = 1; j<=2*i-1;j++){
            if(j == 1 || (2*i-1) == j){
                printf("%c",symbol);
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
                printf("%c",symbol);
            }
            else printf(" ");
        }
        printf("\n");
    }
    for(int i = 1;i<=2*n-1;i++){
        for(int j = 1; j<=2*n-1;j++){
            if(abs(n-i) + abs(n-j) == n-1){
                printf("%c",symbol);
            }
            else printf(" ");
        }
        printf("\n");
    }
}
void PlaindromePyramid(int n){
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
void PascalTriangle(int n){
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
void Butterfly(int n,char symbol){
    for(int i = 1; i<=n;i++){
        for(int j = 1; j<=i;j++){
            printf("%c",symbol);
        }
        for(int j = 1; j<=2*(n-i);j++){
            printf(" ");
        }
        for(int j = 1; j<=i;j++){
            printf("%c",symbol);
        }
        printf("\n");
    }
    for(int i = n-1;i>0;i--){
        for(int j = 1; j<=i;j++){
            printf("%c",symbol);
        }
        for(int j = 1; j<=2*(n-i);j++){
            printf(" ");
        }
        for(int j = 1; j<=i;j++){
            printf("%c",symbol);
        }
        printf("\n");
    }
}

int main(){
    int rows ;
    printf("Enter scope of your pattern:\n");
    scanf("%d",&rows);
    char usersymbol;
    printf("Enter which symbol you want to print :\n");
    scanf(" %c",&usersymbol);

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
    case 1 : RightAngleTriangle(rows,usersymbol);
                break;
    case 2 : SquareBlock(rows,usersymbol);
                break;      
    case 3 : HollowSquare(rows,usersymbol);
    break;   
    case 4 : NumberRow(rows);
    break;
    case 5 :NumberColumn();
    break;
    case 6 : AlphabetStaircase(rows);
    break;
    case 7 : InvertedTriangle(rows,usersymbol);
    break;        
    case 8 : MirroredTriangle(rows,usersymbol);
    break; 
    case  9 : InvertedMirroredTriangle(rows,usersymbol);
    break;
    case 10 : FloyedTriangle(rows);
    break ;
    case 11 : BinaryTriangle(rows);
    break;
    case 12 : TheX(rows,usersymbol);
    break;
    case 13 : FullPyramid(rows,usersymbol);
    break;
    case 14 : InvertedPyramid(rows,usersymbol);
    break;
    case 15 : SolidDaimond(rows,usersymbol);
    break ; 
    case 16 : HollowDaimond(rows,usersymbol);
    break;
    case 17 : PlaindromePyramid(rows);
    break;
    case 18 : PascalTriangle(rows);
    break;
    case 19 : Butterfly(rows,usersymbol);
    break ;
    default : printf("Invalid Choice :");
    break;
}

    return 0;
}