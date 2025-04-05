// #include<stdio.h>
// int factorial(int n){
//     if(n==1|| n==0)
//     return 1;
//     return n*factorial(n-1);

//     }
// int main(){
//     int n;
//     printf("enter a number:");
//     scanf("%d",&n);
//     int fact=factorial(n);
//     printf("%d",fact);
// }

// #include<stdio.h>
// void greeting(int n){
//     if(n==0)
//     return ;
//   printf("%d\n",n);
//   greeting(n+1);
//   return;
// }
// int main(){
//     int n;
//     printf("enter a number:");
//     scanf("%d",&n);
//     greeting(n);

// }



// #include<stdio.h>
// void greeting( int x,int n){
//     if(x>n)
//     return ;
//   printf("%d\n",x);
//   greeting(x+1,n);
//   return;
// }
// int main(){
//     int n;
//     printf("enter a number:");
//     scanf("%d",&n);
//     greeting(1,n);

// }



// #include<stdio.h>
// void greeting(int n){
//     if(n==0)
//     return ;
//     greeting(n-1);
//   printf("%d\n",n);
//   return;
// }
// int main(){
//     int n;
//     printf("enter a number:");
//     scanf("%d",&n);
//     greeting(n);

// }

// #include<stdio.h>
// void decersing(int n){
//     if(n==0)
//     return ;
//     printf("%d\n",n);
//     decersing(n-1);
//     printf("%d\n",n);
//     return ;
// }
// int main(){
//     int n;
//     printf("enter a number:");
//     scanf("%d",&n);
//     decersing(n);

// }


// #include<stdio.h>
// void sum(int n,int s){
//     if(n==0){
//         printf("%d",s);
//         return ;

//     }
//     sum(n-1,s+n);
//     return ;
// }
// int main(){
//     int n;
//     printf("enter a number:");
//     scanf("%d",&n);
//     sum(n,0);
// }


// #include<stdio.h>
// int sum(int n){
//     if(n==1|| n==0)
//     return 1;
//     return n+sum(n-1);

//     }
// int main(){
//     int n;
//     printf("enter a number:");
//     scanf("%d",&n);
//     int add=sum(n);
//     printf("%d",add);
// }


// 


// #include<stdio.h>
// int fibo(int n){
//     if(n==1||n==2)
//     return 1;
//     int a=fibo(n-1);
//     int b=fibo(n-2);
//     int c=a+b;
//     return c;
// }

// int main(){
// int n;
// printf("Enter a number:");
// scanf("%d",&n);
// int x=fibo(n);
// printf("%d",x);
// }



