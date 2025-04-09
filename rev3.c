// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             printf("*");
//         }
//         printf("\n");
//     } 
// }

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a num:");
//     scanf("%d",&n);
//     for(int i=1;i<=3;i++){
//         for(int j=1;j<=n;j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
// }

// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter a num:");
//     scanf("%d",&n);
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         printf("%d ",j);
    //     }
//         printf("\n");
//     }
// }

// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter a num:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }



// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a num");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n+1-i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }



// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter a num:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
// }


// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter a num:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n+1-i;j++){
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
// }


// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter a num:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         int a=1;
//         for(int j=1;j<=i;j++){
//             printf("%d ",a);
//             a=a+2;
         
//         }
       
//         printf("\n");
//     }
// }


// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter a num:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             printf("%c ",'A'+j-1);
//         }
//         printf("\n");
//     }
// }

// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter a num:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             printf("%c ",'A'+j-1);
//         }
//         printf("\n");
//     }
// }


// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter a num");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//         if(i%2==0){
//             printf("%c ",'A'+j-1);
//         }
//         else{
//             printf("%d ",j);
//         }
//     }
//     printf("\n");

//     }
// }

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a num:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             int a=n/2+1;
//             if(j==a||i==a)
//             printf("*");
//             else
//             printf(" ");
//         }
      
//         printf("\n");
//     }
   

// }


// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter a num:");
//     scanf("%d ",&n);
//     int m;
//     printf("enter a num:");
//     scanf("%d ",&m);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=m;j++){
//             if(i==1||i==n||j==1||j==m){
//                 printf("*");
                
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
// }


// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter a num:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(i==j||j==i||i+j==n+1){
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
// }


// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter a num:");
//     scanf("%d",&n);
//     int a=1;
//     for(int i=1;i<=n;i++){
    
//         for(int j=1;j<=i;j++){
//             printf("%d ",a);
//             a++;
//         }
//         printf("\n");
//     }
// }

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a num:");
//     scanf("%d",&n);
//     int a=1;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             printf("%d ",a);
//             a=a+2;
//         }
//         printf("\n");
//     }
// }


// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter a  num:");
//     scanf("%d",&n);
//     int a;
//     for(int i=1;i<=n;i++){
//         if(i%2!=0)
//         a=1;
//         else a=0;
//         for(int j=1;j<=i;j++){
//    printf("%d ",a);
//    if(a==0)
//    a=1;
//    else
//    a=0;
//         }
//         printf("\n");
//     }
// }

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a numebr:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             printf(" ");
//         }
//         for(int k=1;k<=i;k++){
//             printf("*");
//         }
//         printf("\n");
//     }

// }


// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a numebr:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             printf(" ");
//         }
//         for(int k=1;k<=n;k++){
//             printf("*");
//         }
//         printf("\n");
//     }

// }


// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a numebr:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             printf(" ");
//         }

//         for(int k=1;k<=i;k++){
//             printf("%c ",'A'+k-1);
//         }
    
//         printf("\n");
//     }

// }



#include<stdio.h>
int main(){
    int n;
    printf("enter a num:");
    scanf("%d",&n);
   
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
     
        for(int k=1;k<=2*i-1;k++){
            printf("*");
          
        }
     
        printf("\n");
    }
}
