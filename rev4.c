// #include<stdio.h>
// void shy(){
//     printf("ritu\n");
//     return ;
// }
// void ritu(){
//     printf("ram\n");
//     return;
// }
// int main(){
//     shy();
//     ritu();
//     return 0;

// }


// #include<stdio.h>
// int sum(int a,int b){
//     int c=a+b;
//     return c;
// }
// int main(){
//     int a=10,b=4;
//     int k=sum(a,b);
//     printf("%d ",k);
//     return 0;

// }

// #include<Stdio.h>
// int add(int a,int b){
//     int c=a+b;
//     return c;
// }
// int sub(int a,int b){
//     int c=a-b;
//     return c;
// }
// int product(int a,int b){
//     int c=a*b;
//     return c;
// }
// int div(int a,int b){
//     int c=a/b;
//     return c;
// }
// int main(){
    // int a;
    // printf("Enter a num:");
    // scanf("%d",&a);
    // int b;
    // printf("Enter a num:");
    // scanf("%d",&b);
//     int n=add(a,b);
//     int m=sub(a,b);
//     int p=product(a,b);
//     int d=div(a,b);
//     printf("%d ",n);
//     printf("%d ",m);
//     printf("%d ",p);
//     printf("%d ",d);
// }


// #include<stdio.h>
// #include<math.h>
// int main(){
//     int n;
//     printf("enter a num");
//     scanf("%d",&n);
//     int root=sqrt(n);
//     printf("Sqrt is %d ",root);
// }


// #include<stdio.h>
// #include<math.h>
// int main(){
//     int a;
//     printf("Enter a num:");
//     scanf("%d",&a);
//     int b;
//     printf("Enter a num:");
//     scanf("%d",&b);
//     int p=pow(a,b);
//     printf("power %d ",p);
// }



// #include<stdio.h>
// #include<math.h>
// int main(){
//     int a;
//     printf("Enter a num:");
//     scanf("%d",&a);
//     int b;
//     printf("Enter a num:");
//     scanf("%d",&b);
//     int p=pow(a,b);
//     printf("power %d ",p);
// }


// #include<stdio.h>
// int factorial(int a){
//     int fact=1;
//     for(int i=2;i<=a;i++){
//         fact=fact*i; 
//     }
//     return fact;
// }
// int main(){
//     int n;
//     printf("enter a num:");
//     scanf("%d",&n);
//     int r;
//     printf("enter a num:");
//     scanf("%d",&r);
//     int ncr=factorial(n)/(factorial(r)*factorial(n-r));
//     printf("%d ",ncr);
// }



// #include<stdio.h>
// int factorial(int a){
//     int fact=1;
//     for(int i=2;i<=a;i++){
//         fact=fact*i; 
//     }
//     return fact;
// }
// int combination(int n,int r){
//     int ncr=factorial(n)/(factorial(r)*factorial(n-r));
//     return ncr;
// }
// int main(){
//     int n;
//     printf("enter a num:");
//     scanf("%d",&n);
//     int r;
//     printf("enter a num:");
//     scanf("%d",&r);
  
//     int ncr= combination(n,r);
//     printf("%d ",ncr);
// }



// #include <stdio.h>
// int factorial(int n) {
//     int f = 1;
//     for (int i = 1; i <= n; i++) {
//         f *= i;
//     }
//     return f;
// }
// int combination(int n, int r) {
//     return factorial(n) / (factorial(r) * factorial(n - r));
// }

// int main() {
//     int n;
//     printf("Enter the number of rows: ");
//     scanf("%d", &n);
//     for (int i =0;i<n; i++) {
//         for (int j=0;j<n-i-1;j++) {
//             printf("  ");
//         }
//         for (int k=0; k<=i;k++) {
//             printf("%4d", combination(i, k));
//         }
//         printf("\n");
//     }
//     return 0;
// }



// #include<stdio.h>

// int main(){
//     int a;
//     printf("Enter a num");
//     scanf("%d",&a);
//     int b;
//     printf("Enter a num");
//     scanf("%d",&b);
//     int temp=a;
//     a=b;
//     b=temp;
//     printf("%d a is:",a);
//     printf("%d b is:",b);


// }





// #include<stdio.h>

// int main(){
//     int a;
//     printf("Enter a num");
//     scanf("%d",&a);
//     int b;
//     printf("Enter a num");
//     scanf("%d",&b);
//   a=a+b;
//   b=a-b;
//   a=a-b;
//     printf("%d a is:",a);
//     printf("%d b is:",b);


// }


// #include<stdio.h>
// void swap(int *x,int *y){
//     int temp=*x;
//     *x=*y;
//     *y=temp;
//     return;
// }
// int main(){
//     int a;
//     printf("enter a num:");
//     scanf("%d",a);
//     int b;
//     printf("Enter a num:");
//     scanf("%d",&b);
//     swap(&a,&b);
//     printf("value of a is%d :",a);
//     printf("value of b is%d :",b);
// }



// #include<stdio.h>
// int max(int a,int b){
//     if(a>b)
//     return a;
//     else 
//     return b;
// }
// int main(){
//     int n;
//     printf("Enter a num:");
//     scanf("%d",&n);
//     int m;
//     printf("Enter a num:");
//     scanf("%d",&m);
//     int x=max(n,m);
//     printf("%d ",x);
// }


// #include<stdio.h>
// void even(int n){
//     if(n==0){
//         printf("ZERO");
//     }else{
//     if(n%2==0)
//     printf("Even");
//     else
//     printf("odd");
// }
// }
// int main(){
//     int n=0;
//     even(n);
// }


// #include<stdio.h>
// int factorial(int n){
//     if(n==0||n==1)
//     return 1;
//     return n*factorial(n-1);
// }
// int main(){
//     int n=5;
//     int fact=factorial(n);
//     printf("%d",fact);
// }

// #include<stdio.h>
// #include<math.h>
// int main(){
//     int n=2,p=5;
//    int x=pow(n,p);
//     printf("%d ",x);
// }

// #include <stdio.h>

// int main() {
//     int num = 10;         // Declare an integer variable
//     int *ptr = &num;      // Declare a pointer variable that stores the address of 'num'

//     printf("Value of num: %d\n", num);       // Output: 10
//     printf("Address of num: %p\n", &num);    // Output: Address of num
//     printf("Value of ptr: %p\n", ptr);       // Output: Address of num (same as above)
//     printf("Value pointed by ptr: %d\n", *ptr);  // Output: 10 (dereferencing pointer)

//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a numebr:");
//     scanf("%d",&n);
//     int a=n/2;
//     int b=1;
//     int ml=n/2+1;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=a;j++){
//             printf(" ");   
//         }
//         for(int k=1;k<=b;k++){
//             printf("*");
//         }
//         if(i<ml){
//             a--;
//            b+=2;
//         }
//         else{
//             a++;
//             b-=2;
     
//         }
//         printf("\n");
//     }
// }


#include<stdio.h>
int main(){
    int n;
    printf("Enter  a num:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            printf("%d",j);
        }
       printf("\n")
    }
}