// #include<stdio.h>
// int factorial(int n){
//     if(n==1) return 1;
//         return n*factorial(n-1);
//     }

// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     int fact=factorial(n);
//     printf("%d",fact);
//     return 0;
// }


// #include<stdio.h>
// void greeting(int n){
//     if(n==0)return;
//     printf("hello\n");
//     greeting(n-1);
//     return ;
// }
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     greeting(n);
//     return 0;

// }


/*PRINT n TO 1 using recursion*/
// #include<stdio.h>
// void greeting(int n){
//     if(n==0)return;
//     printf("%d\n",n);
//     greeting(n-1);
//     return ;
// }
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     greeting(n);
//     return 0;

// }


/*print 1 to n*/
// #include<stdio.h>
// void greeting(int x,int n){
//     if(x>n)return;
//     printf("%d\n",x);
//     greeting(x+1,n);
//     return ;
// }
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     greeting(1,n);
//     return 0;

// }


/*print  1 to n (after recursive call)*/
// #include<stdio.h>
// void increasing(int n){
//     if(n==0)return;
//     increasing(n-1);
//     printf("%d\n",n);
//     return;
// }
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     increasing(n);
//     return 0;
// }



/*print sum from 1 to n*/
// #include<stdio.h>
// void sum(int n,int s){
//     if(n==0) {
//         printf("%d",s);
//         return ;
//     }
//     sum(n-1,s+n);
//     return ;
    
// }
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     sum(n,0);
//     return 0;
// }


/*SUM RETURN TYPE*/
// #include<stdio.h>
// int sam(int n){
//     if(n==1) return 1;
//         return n+sam(n-1);
//     }

// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     int sum=sam(n);
//     printf("%d",sum);
//     return 0;
// }


// #include<stdio.h>
// int p(int a,int b){
//     if(b==0)return 1;
//     int p=a*power(a,b-1);
//     return p;
// }
// int main(){
//     int a;
//     printf("Enter a number:");
//     scanf("%d",&a);
//     int b;
//     printf("Enter power:");
//     scanf("%d",&b);
//     int p=power(a,b);
//     return 0;
// }