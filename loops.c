/*FOR LOOP*/
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         printf("Hello\n");
//     }
   
// }

// #include<stdio.h>
// int main(){
//     for(int i=1;i<=10;i=i+2){
//         printf("%d ",i);
//     }
   
// }

// #include<stdio.h>
// int main(){
//     for(int i=1;i<=100;i++){
//         printf("%d ",i);
//     }
// }

// #include<stdio.h>
// int main(){
//     for(int i=1;i<=100;i++){
//         if(i%2==0){
//             printf("%d ",i);
//         }
//     }
// }

// #include<stdio.h>
// int main(){
//     for(int i=1;i<=100;i++){
//         if(i%2!=0){
//             printf("%d ",i);
//         }
//     }
// }

// #include<stdio.h>
// int main(){
//     for(int i=19;i<=190;i=i+19){
//         printf("%d ",i);
//     }
// }


// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter a number:");
//     scanf("%d",&n);
//     for(int i=1;i<=10;i++){
//         printf("%dx%d=%d\n",n,i,n*i);
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


// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     int a=4;
//     for(int i=1;i<=n;i++){
//         printf("%d ",a);
//         a=a+3;
//     }
// }


// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     int a=1;
//     for(int i=1;i<=n;i++){
//         printf("%d ",a);
//         a=a*2;
//     }
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



/*break*/
// #include<stdio.h>
// int  main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     int a=0;
//     for(int i=2;i<=n-1;i++){
//         if(n%i==0){
//            a=1;
//             break;
//         } 
//     }
//     if(a==0)
//         printf("prime");
//         else 
//         printf("Composite");
// }


/*CONTINUE*/
// #include<stdio.h>
// int main(){
//     for(int i=1;i<=100;i++){
//         if(i%2==0){
//             continue;
//         }
//         printf("%d ",i);
//     }
// }


/*WHILE LOOP*/
// #include<stdio.h>
// int main(){
//     int i=0;
//     while(i<=10){
//         printf("%d ",i);
//         i++;
//     }
// }


// #include<stdio.h>
// int main(){
//     int x=4,y,z;
//     y=--x;
//     z=x--;
    
//         printf("\n%d%d%d ",x,y,z);
       
//     }


// #include<stdio.h>
// int main(){
//     int x=4,y=3,z;
//     z=x-- -y;
    
//         printf("\n%d%d%d ",x,y,z);
       
//     }


// #include<stdio.h>
// int main(){
//     int x=4,y=0,z;
//    while(x>=0){
//     x--;
//     y++;
//     if(x==y)
//     continue;
//     else 
//     printf("\n %d %d %d ",x,y,z);
    
//    }
       
//     }

// #include<stdio.h>
// int main(){
//     int x=4,y=0,z;
//    while(x>=0){
//     if(x==y)
//     break;
//     else 
//     printf("\n %d %d %d ",x,y,z);
//     x--;
//     y++;
//    } 
//     }

// #include<stdio.h>
// int main(){
//     int i=1;
//     while(i<10){
//         printf("Hello\n");
//     }
// }\


// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     int count=0;
//    while(n>0){
//         n=n/10;
//        count++;
//     }
//     printf("%d ",count);
// }



// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     int sum=0,lastdigit;
//     while(n>0){
//         lastdigit=n%10;
//         sum=sum+lastdigit;
//         n=n/10;

//     }
//     printf("%d",sum);

// }


//#include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     int reverse=0,lastdigit;
//     while(n>0){
//     reverse=reverse*10;
//         lastdigit=n%10;
//  
//         reverse=reverse+lastdigit;
//         
//         n=n/10;
//     }
//     reverse=reverse/10;
//     printf("%d",reverse);
// }


// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter a number:");
//     scanf("%d",&n);
//     int sum=0,r=0,lastdigit;
//     while(n>0){
//         r=r*10;
//         lastdigit=n%10;
//         r=r+lastdigit;
//         n=n/10;
        
//     }
//     sum=sum+r;
       
//     printf("%d %d",sum);


// }



// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         if(i%2!=0)
//         sum=sum+i;
//         else
//         sum=sum-i;
//     }
//     printf("%d",sum);
// }

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     int sum=0;
//     for(int i;i<=n;i++){
//         if(n%2==0)
//         sum=-n/2;
//         else
//         sum=-n/2+n;
//     }
//     printf("%d",sum);
// }


// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     int p=1;
//     for(int i=1;i<=n;i++){
//     p=p*i;
//     }
//     printf("%d",p);
// }

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     int p=1;
//     for(int i=1;i<=n;i++){
//     p=p*i;
//     printf("%d ",p);
//     }
    
// }


// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     int a=1,b=1,sum;
//     for(int i=1;i<=n-2;i++){
//         sum=a+b;
//         a=b;
//         b=sum;
//     }
//     printf("%d",sum);

// }


// #include <stdio.h>
// int main() {
//     int n, first = 0, second = 1, next, i;
//     printf("Enter the number of terms: ");
//     scanf("%d", &n);
//     for (i = 1; i <= n; i++) {
//         printf("%d ", first);
//         next = first + second;
//         first = second;
//         second = next;
//     }
//     return 0;
// }



