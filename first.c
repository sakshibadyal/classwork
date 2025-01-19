// #include<stdio.h>
// int main(){
//     printf("hi");
//     return 0;
// }


/*#include<stdio.h>
int main(){
    int x,y;
    x=90;
    y=90;
    printf("%d",x+y);
    return 0;
}*/


// #include<stdio.h>
// int main(){
//     int x,y;
//     x=90;
//     y=90;
//     printf("%d",x-y);
//     return 0;
// }


/*CHAR DATA type*/
// #include<stdio.h>
// int main(){
//     char x='9';
//     printf("%c",x);
//     return 0;
// }

/*ASCII VALUES*/

// #include<stdio.h>
// int main(){
//     char ch='a';
//     printf("%c",ch);
//     return 0;
// }



// #include<stdio.h>
// int main(){
//     float a;
//     a=7/22*(3.14+2)*3/5;
//     printf("%f",a);

// }

// #include<stdio.h>
// int main(){
//     float d=2/7.0;
//     printf("%f",d);
// }


/*IF ELSE*/

// #include<stdio.h>
// int main(){
//   int x;
//   printf("Enter a number:-");
//   scanf("%f",&x);
//   if(x%2==0){
//     printf("Even number");
//     }
//   if(x%2!=0){
//     printf("Odd number");
//   }

// }


// #include<stdio.h>
// int main(){
//   int x;
//   printf("Enter a number:");
//   scanf("%d",&x);
//   if(x%5==0){
//     printf("Divisible by 5");
//   }
//   else{
//     printf("Not divisible by 5");
//   }
// }


// #include<stdio.h>
// int main(){
//   int x;
//   printf("Enter a year:-");
//   scanf("%d",&x);
//   if(x%4==0){
//     printf("leap year");
//   }
//   else{
//     printf("not leap year");
//   }
// }


/*# absolute value*/
// #include<stdio.h>
// int main(){
//    int c;
//    printf("Enter a number:-");
//    scanf("%d",&c);
//    if(c<0){
//    c=c*(-1);
//   printf("absolute value is :- %d",c);

//    }
// }



// #include<stdio.h>
// int main(){
//   int cp;
//   printf("enter cp:-");
//   scanf("%d",&cp);
//    int sp;
//   printf("enter sp:-");
//   scanf("%d",&sp);
//   if(sp>cp){
//     printf("profit");
//   }
//  else{
//   printf("Loss");
//  }
//   return 0;
// }

/*PRIME NUMBER*/
// #include <stdio.h>
// int main() {
//     printf("Prime numbers less than 100 are:\n");
//     for (int i = 2; i < 100; i++) {
//         int isPrime = 1; 
//         for (int j = 2; j < i; j++) {
//             if (i % j == 0) {
//                 isPrime = 0; 
//                 break; 
//             }
//         }
//         if (isPrime) {
//             printf("%d ", i);
//         }
//     }
//     printf("\n");
//     return 0;
// }


/*LOCAL VARIABLES*/
// #include<stdio.h>
// void function(){
//   int x=10;  // local variable
//   printf("%d",x);
// }
// int main(){
//   function();
// }
  


/*GLOBAL VARIABLES*/

// #include<stdio.h>
// int x=20; //global variables
// void function1(){
//   printf("function 1:%d",x);
// }
// void function2(){
//   printf("function 2:%d",x);
// }
// int main(){
//   function1();
//   function2();
//   return 0;
// }

/*STATIC VARIABLES*/
// #include<stdio.h>
// void function(){
// int x=20;  //local variable
// static int y=30; // static variable
// x=x+10;
// y=y+10;
// printf("\tlocal:%d\n\tstatic:%d\n",x,y);
// }
// int main(){
//    printf("first call\n");
//    function();
//     printf("second call\n");
//    function();
//     printf("third call\n");
//    function();
//    return 0;
// }

/*AUTOMATIC VARIABLES*/
// #include<stdio.h>
// void function(){
// int x=10; //local
// auto int y=20; //auto matic
// printf("Auto Variables: %d",y);

// }
// int main(){
//     function();
//     return 0;
// }



// #include<stdio.h>
// void function(){
// int x=10; //local
// int y; //auto matic


// }
// int main(){
//     auto int y=20;
//     function();
//     printf("Auto Variables: %d",y);
//     return 0;
// }




/*CONSTANT variables*/

// #include<stdio.h>
// int main(){
//     //variable
//     int not_constant;

//     //constant variables;
//     const int constant=20;

//      // changing value
//      not_constant=40;
//     //  constant=22;
//      return 0;

// }

/*REGISTER VARIABLES*/
// #include<stdio.h>
// int main(){
//     register int var=22;
//     printf("Value of register variable: %d\n", var);
//     return 0;
// }


/*AREA ND PERIMETER OF RECTANGLE*/
// #include<stdio.h>
// int main(){
//     int l;
//     printf("Enter lenght:");
//     scanf("%d",&l);
//     int b;
//     printf("Enter breadth:");
//     scanf("%d",&b);
//     int a;
//     a=l*b;
//     printf("AREA of rectangle :%d\n",a);
//     int p;
//     p=2*(l+b);
//     printf("PERIMETER of rectangle :%d\n",p);


//     if(a>p){
//         printf("Area is greater than perimeter");

//     }
//     else{
//         printf("Area is not greater than perimeter");
//     }
//     return 0;
// }



/*&& (and) and ||(or)*/  //local operators


// #include<stdio.h>
// int main(){
//     int i;
//     printf("Enter a number:");
//     scanf("%d",&i);
//     if(i>99 && i<1000){
// printf("it is a three digit number");

//     }
//     else{
//         printf("it is not a three digit number");
//     }
// }




// #include<stdio.h>
// int main(){
//     int i;
//     printf("Enter a number:");
//     scanf("%d",&i);
//     if( i%5==0 || i%3==0){
//         printf( "divisible by 5 nd 3");
//     }
//     else{
//         printf(" not divisible");
//     }
//     return 0;

// }

// #include<stdio.h>
// int main(){
//     int  a;
   
//     printf("Enter number:");
//     scanf("%d",&a);

//     int b;
//        printf("Enter number:");
//     scanf("%d",&b);

//     int c;
//     printf("Enter number:");
//     scanf("%d",&c);
//  if (a>b && a>c){
//     printf("%d is greatest",a);
//  }
//   if ( b>a && b>c){
//     printf("%d is greatest",b);
//  }
//  if (c>a && c>b){
//     printf("%d is greatest",c);
//  }
//     return 0;

// }


#include<stdio.h>
int main(){
    int  a;
   
    printf("Enter number:");
    scanf("%d",&a);

    int b;
       printf("Enter number:");
    scanf("%d",&b);

    int c;
    printf("Enter number:");
    scanf("%d",&c);
    if(a+b>c && b+c>a && c+a>b){
    printf("valid triangle")
    ;
        }
        else{
            printf("not valid triangle");
        }
}

//sakshi
