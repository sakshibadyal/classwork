// #include<stdio.h>
// void greet(){
//     printf("hello\n");
//     return ;
// }
// int main(){
//     greet();

//     greet();   //call
//     return 0;
// }



// #include<stdio.h>
// void england(){
//     printf("in england\n");
//     return ;
// }
// void india(){
//     printf("in india\n");
//     england();
//     return ;
// }
// void uk(){
//     printf("in uk\n");
//     india();
//     return ;
// }
// int main(){
//     uk();
//     return 0;
// }



// #include<stdio.h>
// int add(int a,int b){
// return a+b;
// }
// int main(){
//     int a;
//     printf("enter a number:");
//     scanf("%d",&a);
//     int b;
//     printf("enter a number:");
//     scanf("%d",&b);
//     int sum=add(a,b);
//     printf("%d",sum);
//     return 0;
// }

 
// #include<stdio.h>
// #include<math.h>
// int main(){
//     int a;
//     printf("enter a number:");
//     scanf("%d",&a);
//     int  root=sqrt(a);
//     printf("%d",root);
// }
  


// #include<stdio.h>
// #include<math.h>
// int main(){

//     int p=pow(2,3);
//     printf("%d",p);
// }


/*prototype*/
// #include<stdio.h>

// int main(){
//     void fun();
//     fun();
//     return 0;

// }
// void fun(){
//     printf("Hello");
//     return ;
// }


/*combination and permutation*/
// #include<stdio.h>
// int factorial(int x){
//     int fact=1;
//     for(int i=2;i<=x;i++){
//         fact=fact*i;
//     }
//     return fact;
// }
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     int r;
//     printf("Enter a number:");
//     scanf("%d",&r);
//     int ncr=factorial(n)/(factorial(r)*factorial(n-r));
//     printf("%d",ncr);
//     return 0;
// }


/*pascal triangle*/
// #include<stdio.h>
// int factorial(int x){
//     int fact=1;
//     for(int i=2;i<=x;i++){
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
//     printf("Enter a number:");
//     scanf("%d",&n);
//     for(int i=0;i<=n;i++){
//         for(int j=0;j<=i;j++){
//             int icj=combination(i,j);
//             printf("%d ",icj);
//         }
// printf("\n");
// }
//     return 0;
// }






/*pascal triangle*/
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number");
//     scanf("%d",&n);
//     for(int i=0;i<=n;i++){
//         int first=1;
//         for(int j=0;j<=i;j++){
//             printf("%d ",first);
//             first=first*(i-j)/(j+1);

//         }
//         printf("\n");
//     }
//     return 0;
// }


/*SWAP TWO NUMBERS*/
// #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter a number");
//     scanf("%d",&a);
//     int b;
//     printf("Enter a number");
//     scanf("%d",&b);
//     int temp;
//     temp=a;
//     a=b;
//     b=temp;
        
//       printf("%d",a);
//       printf("%d",b);
//     return 0;
// }


/*without using 3 variable swap two num*/

// #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter a number:");
//     scanf("%d",&a);
//     int b;
//     printf("Enter a number:");
//     scanf("%d",&b);
//     a=a+b;
// b=a-b;
// a=a-b;
// printf("%d%d%d",a,b);
// }

/*PASS BY VALUE & PASS BY REFERENCE*/
// #include<stdio.h>
// void swap(int a,int b){
// int temp=a;
// a=b;
// b=temp;
// return;
// }
// int main(){
//     int a;
//     printf("Enter a number:");
//     scanf("%d",&a);
//     int b;
//     printf("Enter a number:");
//     scanf("%d",&b);
//     int temp=a;
// a=b;
// b=temp;
    
// printf("%d%d",a,b);
// }




/*FORMAL PARAMETERS AND ACTUAL PARAMETER*/
//a,b are formal paramter nd unki values are actual parameter



/*POINTERSA*/
// variables k andr address  store krwana
//printf("%p",x) //value of x
//printf("%p",&x)  // address of x 
//printf("%d",*x)  // x k ander jis bhi variable ka address store hai usko point kro nd print kra do



