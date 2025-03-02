// // #include<stdio.h>
// // int main(){
// //     for(int i=1;i<=100;i++){
// //         printf("%d\n",i);
// //     }
// // }


// // #include<stdio.h>
// // int main(){
// //     for(int i=1;i<=100;i++){
// //         if(i%2==0)
// //         printf("%d\n",i);
// //     }
// // }


// // #include<stdio.h>
// // int main(){
// //     for(int i=1;i<=100;i++){
// //         if(!(i%2==0))
// //         printf("%d\n",i);
// //     }
// // }


// // #include<stdio.h>
// // int main(){
// //     for(int i=19;i<=190;i=i+19){
// //         printf("%d\n",i);
// //     }
// // }



// // #include<stdio.h>
// // int main(){
// //     int n;
// //     printf("Enter a number:");
// //     scanf("%d",&n);
// //     for(int i=1;i<=10;i++){
// //         printf("%d x %d=%d\n",n,i,n*i);
// //     }
// // }



// // #include<stdio.h>
// // int main(){
// //     int n;
// //     printf("Enter a number:");
// //     scanf("%d",&n);
// //     for(int i=1;i<=2*n-1;i=i+2){
// //         printf("%d ",i);
// //     }
// // }



// // #include<stdio.h>
// // int main(){
// //     int n;
// //     printf("Enter a number:");
// //     scanf("%d",&n);
// //     for(int i=4;i<=3*n+1;i=i+3){
// //         printf("%d ",i);
// //     }
// // }



// // #include <stdio.h>
// // #include <math.h>
// // int main() {
// //     double num;
// //     printf("Enter a decimal number: ");
// //     scanf("%lf", &num);
// //     printf("Floor of %.2f is %.2f\n", num, floor(num));
// //     printf("Ceil of %.2f is %.2f\n", num, ceil(num));
// //     return 0;
// // }


// // #include <stdio.h>
// // #include <ctype.h>
// // int main() {
// //     char ch;
// //     printf("Enter a character: ");
// //     scanf("%c", &ch);
// //     if (isupper(ch))
// //         printf("Uppercase\n");
// //     else if (islower(ch))
// //         printf("Lowercase\n");
// //     else
// //         printf("Not an alphabet\n");

// //     return 0;
// // // }


// // #include <stdio.h>
// // #include <ctype.h>
// // int main() {
// //     char ch;
// //     printf("Enter a character: ");
// //     scanf("%c", &ch);
// //     if (isupper(ch))
// //         printf("Lowercase: %c\n", tolower(ch));
// //     else if (islower(ch))
// //         printf("Uppercase: %c\n", toupper(ch));
// //     else
// //         printf("Not an alphabet\n");
// //     return 0;
// // }


// // #include <stdio.h>
// // #include <math.h>
// // int main() {
// //     int num;
// //     scanf("%d", &num);
// //     printf("%d", abs(num));
// //     return 0;
// // }

// // #include <stdio.h>
// // int area_square(int side) {
// //     return side * side;
// // }
// // int main() {
// //     int side;
// //     printf("Enter side length: ");
// //     scanf("%d", &side);
// //     printf("Area: %d\n", area_square(side));
// //     return 0;
// // }



// // #include <stdio.h>
// // float simple_interest(float p, float r, float t) {
// //     return (p * r * t) / 100;
// // }
// // int main() {
// //     float p, r, t;
// //     scanf("%f %f %f", &p, &r, &t);
// //     printf("%.2f\n",simple_interest(p, r, t));
// //     return 0;
// // }


// // #include <stdio.h>
// // #include <stdio.h>
// // int isPrime(int num) {
// //     if (num <= 1)
// //         return 0; 
// //     for (int i = 2; i * i <= num; i++) {
// //         if (num % i == 0)
// //             return 0; 
// //     }
// //     return 1;
// // }
// // int main() {
// //     int num;
// //     printf("Enter a number: ");
// //     scanf("%d", &num);
    
// //     if (isPrime(num)){
// //         printf("%d is a prime number.\n", num);
// //     }
// //     else{
// //         printf("%d is not a prime number.\n", num);
// //     }
// //     return 0;
// // }



// // #include<stdio.h>
// // int main(){
// //     int n;
// //     printf("Enter a number:");
// //     scanf("%d",&n);
// //     int a=3;
// //     for(int i=1;i<=n;i++){
// //         printf("%d ",a);
// //         a=a*4;

// //     }
// // }



// // #include<stdio.h>
// // int main(){
// //     int n;
// //     printf("Enter a number:");
// //     scanf("%d",&n);
// //     int a=100;
// //     for(int i=1;i<=n;i++){
// //         printf("%d ",a);
// //         a=a-3;

// //     }
// // }

// // #include<stdio.h>
// // int main(){
// //     int n;
// //     printf("Enter a number:");
// //     scanf("%d",&n);
// //     int a=100;
// //     for(int i=1;a>0;i++){
// //         printf("%d ",a);
// // a=a-3;

// //     }
// // }


// // #include<stdio.h>
// // int main(){
// //     int n;
// //     printf("Enter a number:");
// //     scanf("%d",&n);
// //     float a=100;
// //     for(int i=1;i<=n;i++){
// //         printf("%.2f ",a);
// //         a=a*1/2;

// //     }
// // }



// /*BREAK*/
// // #include<stdio.h>
// // int main(){
// //     int n;
// //     printf("Enter a number:");
// //     scanf("%d",&n);
// //     int a=0;
// //     for(int i=2;i<=n;i++){
// //         if(n%i==0){
// //         a=1;
// //         break;

// //     }
// // }
// // if(a==0)printf("no is prime");
// //     else printf("no is composite");
    
// // }


// /*CONTINUE*/
// // #include<stdio.h>
// // int main(){

// //     for (int i=1; i<=100; i++)
// //     {
// //         if(i%2==0){
// //             continue;
            
// //         }
// //         printf("%d ",i);
// //     }
    
// // }



// /*even*/
// // #include<stdio.h>
// // int main(){

// // for (int i=1;i<=100;i++)
// // { 
// //     if(!(i%2==0)){
// //         continue;
// //     }
// // printf("%d ",i);
// // }

// // }



// /*WHILE LOOP*/

// // #include<stdio.h>
// // int main(){
// //     int i=1;
// //     while(i<=100){
// //         printf("%d ",i);
// //         i++;
// //     }
// // }

// // #include<stdio.h>
// // int main(){
// //     int i=1;
// //     while(i<=10){
// //         printf("%d ",i);
// //         i++;
// //     }
// // }


// // #include<stdio.h>
// // int main(){
// //     int x=1;
// //     while(x==1){
// //         x=x-1;
// //         printf("%d ",x);
    
// //     }
// // }


// // #include<stdio.h>
// // int main(){
// //     int x=4,y,z;
// //     y=--x;
// //     z=x--;
// //         printf("%d %d %d",x,y,z);
        
// //     }

// // #include<stdio.h>
// // int main(){
// //     int x=4,y=3,z;
// //     z=x-- -y;

// //         printf("%d %d %d",x,y,z);
        
// //     }



// // #include<stdio.h>
// // int main(){
// //     int x=10;
// //     while(x=20)
// //         printf("\n A comp buff!");
        
// //     }

// // #include<stdio.h>
// // int main(){
// //     int x=4,y=0,z;
// //     while(x>=0){
// //         x--;
// //         y++;
// //         if(x==y)
// //         continue;
// //         else
// //         printf("%d%d",x,y);    
// //     }
// // }


// // #include<stdio.h>
// // int main(){
// //     int x=4,y=0,z;
// //    while(x>=0){
// //     if(x==y)
// //     break;
   
// //    else 
// //    printf("%d%d",x,y);
// //    x--;
// //    y++;
        
// //     }
// // }



// // #include<stdio.h>
// // int main(){
// //     int n;
// //     printf("Enter  a number:");
// //     scanf("%d",&n);
// //     int  count =0;
// //     while(n!=0){
// //         n=n/10;
// //         count++;
 
// //     }
// //     printf("the no of digit are %d",count);
// // }

// // #include<stdio.h>
// // int main(){
// //     int n;
// //     printf("Enter  a number:");
// //     scanf("%d",&n);
// //     int  sum=0,lastdigit=0;
// //     while(n!=0){
// //        lastdigit=n%10;
// //        sum=sum+lastdigit;
// //        n=n/10;

// //     }
// //     printf("the sum of digit are %d",sum);
// //     }
   




// #include<stdio.h>
// int main(){
// int n;
// printf("ENter a number:");
// scanf("%d",&n);
// int count=0;
// while(n>0){
// n=n/10;
// count++;

// }
// printf("%d",count);
// }


// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     int sum=0,lastdigit=0;
//     while(n>0){
//         lastdigit=n%10;
//     sum=sum+lastdigit;
//     n=n/10;
// }
// printf("%d",sum);
// }




// #include<stdio.h>
// int main(){
//     for(int i=1;i<=100;i++){
//         printf("%d\n",i);
//     }
// }


// #include<stdio.h>
// int main(){
//     for(int i=1;i<=100;i++){
//         if(i%2==0)
//         printf("%d\n",i);
//     }
// }


// #include<stdio.h>
// int main(){
//     for(int i=1;i<=100;i++){
//         if(!(i%2==0))
//         printf("%d\n",i);
//     }
// }


// #include<stdio.h>
// int main(){
//     for(int i=19;i<=190;i=i+19){
//         printf("%d\n",i);
//     }
// }



// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     for(int i=1;i<=10;i++){
//         printf("%d x %d=%d\n",n,i,n*i);
//     }
// }



// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     for(int i=1;i<=2*n-1;i=i+2){
//         printf("%d ",i);
//     }
// }



// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     for(int i=4;i<=3*n+1;i=i+3){
//         printf("%d ",i);
//     }
// }



// #include <stdio.h>
// #include <math.h>
// int main() {
//     double num;
//     printf("Enter a decimal number: ");
//     scanf("%lf", &num);
//     printf("Floor of %.2f is %.2f\n", num, floor(num));
//     printf("Ceil of %.2f is %.2f\n", num, ceil(num));
//     return 0;
// }


// #include <stdio.h>
// #include <ctype.h>
// int main() {
//     char ch;
//     printf("Enter a character: ");
//     scanf("%c", &ch);
//     if (isupper(ch))
//         printf("Uppercase\n");
//     else if (islower(ch))
//         printf("Lowercase\n");
//     else
//         printf("Not an alphabet\n");

//     return 0;
// // }


// #include <stdio.h>
// #include <ctype.h>
// int main() {
//     char ch;
//     printf("Enter a character: ");
//     scanf("%c", &ch);
//     if (isupper(ch))
//         printf("Lowercase: %c\n", tolower(ch));
//     else if (islower(ch))
//         printf("Uppercase: %c\n", toupper(ch));
//     else
//         printf("Not an alphabet\n");
//     return 0;
// }


// #include <stdio.h>
// #include <math.h>
// int main() {
//     int num;
//     scanf("%d", &num);
//     printf("%d", abs(num));
//     return 0;
// }

// #include <stdio.h>
// int area_square(int side) {
//     return side * side;
// }
// int main() {
//     int side;
//     printf("Enter side length: ");
//     scanf("%d", &side);
//     printf("Area: %d\n", area_square(side));
//     return 0;
// }



// #include <stdio.h>
// float simple_interest(float p, float r, float t) {
//     return (p * r * t) / 100;
// }
// int main() {
//     float p, r, t;
//     scanf("%f %f %f", &p, &r, &t);
//     printf("%.2f\n",simple_interest(p, r, t));
//     return 0;
// }


// #include <stdio.h>
// #include <stdio.h>
// int isPrime(int num) {
//     if (num <= 1)
//         return 0; 
//     for (int i = 2; i * i <= num; i++) {
//         if (num % i == 0)
//             return 0; 
//     }
//     return 1;
// }
// int main() {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
    
//     if (isPrime(num)){
//         printf("%d is a prime number.\n", num);
//     }
//     else{
//         printf("%d is not a prime number.\n", num);
//     }
//     return 0;
// }



// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     int a=3;
//     for(int i=1;i<=n;i++){
//         printf("%d ",a);
//         a=a*4;

//     }
// }



// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     int a=100;
//     for(int i=1;i<=n;i++){
//         printf("%d ",a);
//         a=a-3;

//     }
// }

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     int a=100;
//     for(int i=1;a>0;i++){
//         printf("%d ",a);
// a=a-3;

//     }
// }


// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     float a=100;
//     for(int i=1;i<=n;i++){
//         printf("%.2f ",a);
//         a=a*1/2;

//     }
// }



/*BREAK*/
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     int a=0;
//     for(int i=2;i<=n;i++){
//         if(n%i==0){
//         a=1;
//         break;

//     }
// }
// if(a==0)printf("no is prime");
//     else printf("no is composite");
    
// }


/*CONTINUE*/
// #include<stdio.h>
// int main(){

//     for (int i=1; i<=100; i++)
//     {
//         if(i%2==0){
//             continue;
            
//         }
//         printf("%d ",i);
//     }
    
// }



/*even*/
// #include<stdio.h>
// int main(){

// for (int i=1;i<=100;i++)
// { 
//     if(!(i%2==0)){
//         continue;
//     }
// printf("%d ",i);
// }

// }



/*WHILE LOOP*/

// #include<stdio.h>
// int main(){
//     int i=1;
//     while(i<=100){
//         printf("%d ",i);
//         i++;
//     }
// }

// #include<stdio.h>
// int main(){
//     int i=1;
//     while(i<=10){
//         printf("%d ",i);
//         i++;
//     }
// }


// #include<stdio.h>
// int main(){
//     int x=1;
//     while(x==1){
//         x=x-1;
//         printf("%d ",x);
    
//     }
// }


// #include<stdio.h>
// int main(){
//     int x=4,y,z;
//     y=--x;
//     z=x--;
//         printf("%d %d %d",x,y,z);
        
//     }

// #include<stdio.h>
// int main(){
//     int x=4,y=3,z;
//     z=x-- -y;

//         printf("%d %d %d",x,y,z);
        
//     }



// #include<stdio.h>
// int main(){
//     int x=10;
//     while(x=20)
//         printf("\n A comp buff!");
        
//     }

// #include<stdio.h>
// int main(){
//     int x=4,y=0,z;
//     while(x>=0){
//         x--;
//         y++;
//         if(x==y)
//         continue;
//         else
//         printf("%d%d",x,y);    
//     }
// }


// #include<stdio.h>
// int main(){
//     int x=4,y=0,z;
//    while(x>=0){
//     if(x==y)
//     break;
   
//    else 
//    printf("%d%d",x,y);
//    x--;
//    y++;
        
//     }
// }



// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter  a number:");
//     scanf("%d",&n);
//     int  count =0;
//     while(n!=0){
//         n=n/10;
//         count++;
 
//     }
//     printf("the no of digit are %d",count);
// }

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter  a number:");
//     scanf("%d",&n);
//     int  sum=0,lastdigit=0;
//     while(n!=0){
//        lastdigit=n%10;
//        sum=sum+lastdigit;
//        n=n/10;

//     }
//     printf("the sum of digit are %d",sum);
//     }
   




// #include<stdio.h>
// int main(){
// int n;
// printf("ENter a number:");
// scanf("%d",&n);
// int count=0;
// while(n>0){
// n=n/10;
// count++;

// }
// printf("%d",count);
// }


// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
// int sum=0,lastdigit;
// while(n>0){
// lastdigit=n%10;
// if(lastdigit%2==0){
// sum=sum+lastdigit;
// }
// n=n/10;
 
// }
// printf("%d",sum);
// }


// #include<stdio.h>
// int main(){
//     for(int i=1;i<=100;i++){
//         printf("%d\n",i);
//     }
// }


// #include<stdio.h>
// int main(){
//     for(int i=1;i<=100;i++){
//         if(i%2==0)
//         printf("%d\n",i);
//     }
// }


// #include<stdio.h>
// int main(){
//     for(int i=1;i<=100;i++){
//         if(!(i%2==0))
//         printf("%d\n",i);
//     }
// }


// #include<stdio.h>
// int main(){
//     for(int i=19;i<=190;i=i+19){
//         printf("%d\n",i);
//     }
// }



// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     for(int i=1;i<=10;i++){
//         printf("%d x %d=%d\n",n,i,n*i);
//     }
// }



// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     for(int i=1;i<=2*n-1;i=i+2){
//         printf("%d ",i);
//     }
// }



// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     for(int i=4;i<=3*n+1;i=i+3){
//         printf("%d ",i);
//     }
// }



// #include <stdio.h>
// #include <math.h>
// int main() {
//     double num;
//     printf("Enter a decimal number: ");
//     scanf("%lf", &num);
//     printf("Floor of %.2f is %.2f\n", num, floor(num));
//     printf("Ceil of %.2f is %.2f\n", num, ceil(num));
//     return 0;
// }


// #include <stdio.h>
// #include <ctype.h>
// int main() {
//     char ch;
//     printf("Enter a character: ");
//     scanf("%c", &ch);
//     if (isupper(ch))
//         printf("Uppercase\n");
//     else if (islower(ch))
//         printf("Lowercase\n");
//     else
//         printf("Not an alphabet\n");

//     return 0;
// // }


// #include <stdio.h>
// #include <ctype.h>
// int main() {
//     char ch;
//     printf("Enter a character: ");
//     scanf("%c", &ch);
//     if (isupper(ch))
//         printf("Lowercase: %c\n", tolower(ch));
//     else if (islower(ch))
//         printf("Uppercase: %c\n", toupper(ch));
//     else
//         printf("Not an alphabet\n");
//     return 0;
// }


// #include <stdio.h>
// #include <math.h>
// int main() {
//     int num;
//     scanf("%d", &num);
//     printf("%d", abs(num));
//     return 0;
// }

// #include <stdio.h>
// int area_square(int side) {
//     return side * side;
// }
// int main() {
//     int side;
//     printf("Enter side length: ");
//     scanf("%d", &side);
//     printf("Area: %d\n", area_square(side));
//     return 0;
// }



// #include <stdio.h>
// float simple_interest(float p, float r, float t) {
//     return (p * r * t) / 100;
// }
// int main() {
//     float p, r, t;
//     scanf("%f %f %f", &p, &r, &t);
//     printf("%.2f\n",simple_interest(p, r, t));
//     return 0;
// }


// #include <stdio.h>
// #include <stdio.h>
// int isPrime(int num) {
//     if (num <= 1)
//         return 0; 
//     for (int i = 2; i * i <= num; i++) {
//         if (num % i == 0)
//             return 0; 
//     }
//     return 1;
// }
// int main() {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
    
//     if (isPrime(num)){
//         printf("%d is a prime number.\n", num);
//     }
//     else{
//         printf("%d is not a prime number.\n", num);
//     }
//     return 0;
// }



// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     int a=3;
//     for(int i=1;i<=n;i++){
//         printf("%d ",a);
//         a=a*4;

//     }
// }



// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     int a=100;
//     for(int i=1;i<=n;i++){
//         printf("%d ",a);
//         a=a-3;

//     }
// }

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     int a=100;
//     for(int i=1;a>0;i++){
//         printf("%d ",a);
// a=a-3;

//     }
// }


// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     float a=100;
//     for(int i=1;i<=n;i++){
//         printf("%.2f ",a);
//         a=a*1/2;

//     }
// }



/*BREAK*/
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     int a=0;
//     for(int i=2;i<=n;i++){
//         if(n%i==0){
//         a=1;
//         break;

//     }
// }
// if(a==0)printf("no is prime");
//     else printf("no is composite");
    
// }


/*CONTINUE*/
// #include<stdio.h>
// int main(){

//     for (int i=1; i<=100; i++)
//     {
//         if(i%2==0){
//             continue;
            
//         }
//         printf("%d ",i);
//     }
    
// }



/*even*/
// #include<stdio.h>
// int main(){

// for (int i=1;i<=100;i++)
// { 
//     if(!(i%2==0)){
//         continue;
//     }
// printf("%d ",i);
// }

// }



/*WHILE LOOP*/

// #include<stdio.h>
// int main(){
//     int i=1;
//     while(i<=100){
//         printf("%d ",i);
//         i++;
//     }
// }

// #include<stdio.h>
// int main(){
//     int i=1;
//     while(i<=10){
//         printf("%d ",i);
//         i++;
//     }
// }


// #include<stdio.h>
// int main(){
//     int x=1;
//     while(x==1){
//         x=x-1;
//         printf("%d ",x);
    
//     }
// }


// #include<stdio.h>
// int main(){
//     int x=4,y,z;
//     y=--x;
//     z=x--;
//         printf("%d %d %d",x,y,z);
        
//     }

// #include<stdio.h>
// int main(){
//     int x=4,y=3,z;
//     z=x-- -y;

//         printf("%d %d %d",x,y,z);
        
//     }



// #include<stdio.h>
// int main(){
//     int x=10;
//     while(x=20)
//         printf("\n A comp buff!");
        
//     }

// #include<stdio.h>
// int main(){
//     int x=4,y=0,z;
//     while(x>=0){
//         x--;
//         y++;
//         if(x==y)
//         continue;
//         else
//         printf("%d%d",x,y);    
//     }
// }


// #include<stdio.h>
// int main(){
//     int x=4,y=0,z;
//    while(x>=0){
//     if(x==y)
//     break;
   
//    else 
//    printf("%d%d",x,y);
//    x--;
//    y++;
        
//     }
// }



// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter  a number:");
//     scanf("%d",&n);
//     int  count =0;
//     while(n!=0){
//         n=n/10;
//         count++;
 
//     }
//     printf("the no of digit are %d",count);
// }

/*sum of digit*/
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter  a number:");
//     scanf("%d",&n);
//     int  sum=0,lastdigit=0;
//     while(n!=0){
//        lastdigit=n%10;
//        sum=sum+lastdigit;
//        n=n/10;

//     }
//     printf("the sum of digit are %d",sum);
//     }
   



/*count the digits*/
// #include<stdio.h>
// int main(){
// int n;
// printf("ENter a number:");
// scanf("%d",&n);
// int count=0;
// while(n>0){
// n=n/10;
// count++;

// }
// printf("%d",count);
// }



/*reverse*/
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     int r=0,lastdigit;
//     while(n>0){
//         r=r*10;
//         lastdigit=n%10;
//         r=r+lastdigit;
    
//         n=n/10;

//     }
   
//      printf("%d",r);
// }


/*reverse of sum*/
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a  number:");
//     scanf("%d",&n);
//     int r=0,lastdigit,sum;
//     while(n>0){
//         r=r*10;
//         lastdigit=n%10;
//         r=r+lastdigit;
//         n=n/10;
//         sum=sum+lastdigit;
        
        
//     }
    
//     printf("%d\n%d",r,sum);
// }



/*series*/
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     int sum=0;;
//     for(int i=1;i<=n;i++){
//         if(i%2==0)
//         sum=sum-i;
//         else sum=sum+i;
//     }
//     printf("%d",sum);
// }


/*series*/
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     int sum=0;
//         if(n%2==0){
//         sum=-n/2;
//         }
//         else {sum=-n/2+n;}
//         printf("%d", sum);
//     }
    

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     int p=1;
//     for(int i=1;i<=n;i++){
//         p=p*i;
//     }
//     printf("%d",p);
// }


/*factorial*/
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     int p=1;
//     for(int i=1;i<=n;i++){
//         p=p*i;
//         printf("%d\n",p);
//     }
    
// }



/*fibonacci*/
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     int a=1,b=1,sum=1;
//     for(int i=1;i<=n-2;i++){
//         sum=a+b;
//         a=b;
//         b=sum;
//         printf("%d ",sum);
//     }
    
// }
#include<stdio.h>
int main(){
int a;
printf("Enter baseS:");
scanf("%d",&a);
int b;
printf("Enter power:");
scanf("%d",&b);
int power=1;
for(int i=1;i<=b;i++){
    power=power*a;
}
printf("%d raised to power %d %d",a,b,power);

}