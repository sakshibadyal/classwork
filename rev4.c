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


#include<stdio.h>
void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
    return;
}
int main(){
    int a;
    printf("enter a num:");
    scanf("%d",a);
    int b;
    printf("Enter a num:");
    scanf("%d",&b);
    swap(&a,&b);
    printf("value of a is%d :",a);
    printf("value of b is%d :",b);
}