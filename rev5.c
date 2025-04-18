// #include<stdio.h>
// int factorial(int n){
//     if(n==1 || n==0) return 1;
//     int x=n*factorial(n-1);
// return x;
// }
// int main(){
//     int n;
//     printf("enter a num:");
//     scanf("%d",&n);
// int fact=factorial(n);
//         printf("%d ",fact);
//     }
    


// #include<stdio.h>
// void decreasing(int n){
//     if(n==0)
//     return;
//     printf("%d ",n);
//    decreasing(n-1);
//    return ;

// }
// int main(){
//     int n;
//     printf("Enter a num:");
//     scanf("%d",&n);
//     decreasing(n);
//     return 0;
    
// }


// #include<stdio.h>
// void increasing(int a,int b){
//     if(a>b)
//     return;
//     printf("%d ",a);
//     increasing(a+1,b);
//     return;

// }
// void decreasing(int n){
//     if(n==0)
//     return;
//     printf("%d ",n);
//    decreasing(n-1);
//    return ;

// }
// int main(){
//     int m=1,n;
//     printf("Enter a num:");
//     scanf("%d",&n);
//     increasing(m,n);
//     decreasing(n);

// }





//     #include<stdio.h>
//     void increasing(int n){
//         if(n==0)
//         return;
//         printf("%d" ,n);
//         increasing(n-1);
//         return ;
//     }
//     int main(){
//         int n;
//         printf("Enter a num:");
//         scanf("%d",&n);
//         increasing(n);
//     }




// #include<stdio.h>
// void incresing(int m,int n){
//     if(m>n)
//     return;
//     printf("%d ",m);
//     incresing(m+1,n);
//     return ;
// }

// int main(){
//     int n;
//     printf("Enter a num:");
//     scanf("%d",&n);
//     incresing(1,n);
// }




// #include<stdio.h>
// void sum(int n,int m){
//     if(n==0){
//     printf("%d ",m);
//     return;
//     }
//     sum(n-1,m+n);
//     return ;
// }
// int main(){
//     int n;
//     printf("enter a num:");
//     scanf("%d",&n);
//     sum(n,0);
// }




// #include<stdio.h>
// int factorial(int n){
//     if(n==1 || n==0) return 1;
//     int x=n+factorial(n-1);
// return x;
// }
// int main(){
//     int n;
//     printf("enter a num:");
//     scanf("%d",&n);
// int fact=factorial(n);
//         printf("%d ",fact);
//     }




// #include<stdio.h>
// int power(int a,int b){
//     if(b==0)
//     return 1;
//     return a*power(a,b-1);
// }
// int main(){
//     int a,b;
//     printf("Enter a num");
//     scanf("%d %d",&a,&b);
//     int p=power(a,b);
//     printf("%d ",p);
// }



// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a num:");
//     scanf("%d",&n);
//     int a=1,b=1,sum;
//     for(int i=1;i<=n-2;i++){
//         sum=a+b;
//         a=b;
//         b=sum;
//         printf("%d",sum);

//     }
// }


// #include <stdio.h>
// int main() {
//     int n, a=0, b=1, sum ;
//     printf("Enter the number of terms: ");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++) {
//         printf("%d ", a);
//         sum = a+b;
//        a=b;
//        b= sum;
//     }
//     return 0;
// }



// #include <stdio.h>
// int fibonacci(int n) {
//     if (n <= 1)
//         return n; // Base cases: fib(0) = 0, fib(1) = 1
//     return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case
// }

// int main() {
//     int n;
//     printf("Enter the value of n: ");
//     scanf("%d", &n);
//     printf("The %d-th Fibonacci number is: %d\n", n, fibonacci(n));
//     return 0;
// }



// #include<stdio.h>
// int stair(int n){
//     if(n==1||n==2)
//     return n;
//     int totalway=stair(n-1)+stair(n-2);
//     return totalway;
// }
// int main(){
//     int n;
//     printf("Enter a num:");
//     scanf("%d",&n);
//     int ways=stair(n);
//     printf("%d",ways);
// }



// #include<stdio.h>
// int stair(int n){
//     if(n==1||n==2||n==3)
//     return n;
//     int totalway=stair(n-1)+stair(n-2)+stair(n-3);
//     return totalway;
// }
// int main(){
//     int n;
//     printf("Enter a num:");
//     scanf("%d",&n);
//     int ways=stair(n);
//     printf("%d",ways);
// }


// #include<stdio.h>
// int powerlog(int a,int b){
//     if(b==1)
//     return a;
//     int x=powerlog(a,b/2);
// if(b%2==0){
//     return x*x;
// }
// else{
//     return x*x*a;
// }
// }
// int main(){
//     int a,b;
//     printf("Enter a num");
//     scanf("%d %d",&a,&b);
//     int p=powerlog(a,b);
//     printf("%d ",p);
// }




// #include<stdio.h>
// int maze(int n,int m){
//     int rytways=0;
//     int downways=0;
//     if(n==1 && m==1)
//     return 1;
//     if(n==1){
//         rytways+=maze(n,m-1);
//     }
//   if(m==1){
//     downways+=maze(n-1,m);
//   }
//     if(n>1 && m>1){
//       rytways+=maze(n,m-1);
//          downways+=maze(n-1,m);
//     }

//     int totalways=rytways+downways;
//     return totalways;

// }
// int main(){
// int n; 
// printf("Enter a num:");
// scanf("%d",&n);
// int m;
// printf("Enter a num:");
// scanf("%d",&m);
// int noofways=maze(n,m);
// printf("%d ",noofways);
// }




// #include<stdio.h>
// int factorial(int n){
//     if(n==0||n==1)
//     return 1;
//     int x= n*factorial(n-1);
//   return x;

// }
// int main(){
//     int n;
//     printf("Enter a num:");
//     scanf("%d",&n);
//     int fact=factorial(n);
//     printf("%d",fact);
// }



// #include<stdio.h>
// void decresing(int n){
//     if(n==0)
//     return ;
//     printf("%d ",n);
//     decresing(n-1);
//     return ;
// }
// int main(){
//     int n;
//     printf("enter a num:");
//     scanf("%d",&n);
//     decresing(n);
// }



//#include<stdio.h>
// void incresing(int a, int b){
//     if(a>b)
//     return;
//     printf("%d ",a);
//     incresing(a+1,b);
//     return ;
// }
// int main(){
//     int n;
//     printf("Enter a num:");
//     scanf("%d",&n);
//  incresing(1,n);
// }



// #include<stdio.h>
// void sum(int n,int m){
//     if(n==0){
//       printf("%d ",m);
//       return;
//     }
//   sum(n-1,m+n);
//   return ;
    
// }
// int main(){
//     int n;
//     printf("Enter a num:");
//     scanf("%d",&n);
//     sum(n,0);
//     return 0;
// }



// #include<stdio.h>
// void sum(int n,int m){
//     if(n==0){
//     printf("%d ",m);
//     return;
//     }
//     sum(n-1,m+n);
//     return ;
// }
// int main(){
//     int n;
//     printf("enter a num:");
//     scanf("%d",&n);
//     sum(n,0);
// }


// #include<stdio.h>
// int power(int n,int m){
//   if(m==0)
//   return 1;
//   return n*power(n,m-1);
// }
// int main(){
//   int n;
//   printf("Enter a num :");
//   scanf("%d",&n);
//   int m;
//   printf("Enter a num :");
//   scanf("%d",&m);
//   int p=power(n,m);
//   printf("%d ",p);
// }



// #include<stdio.h>
// int fibo(int n){
// if(n<=1)
// return n;
// return fibo(n-1)+fibo(n-2);
// }
// int main(){
//   int n;
//   printf("Enter a num:");
//   scanf("%d",&n);
//   int fib=fibo(n);
//   printf("%d",fib);
// }







