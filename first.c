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
//     printf("is greatest",a);
//  }
//   if ( b>a && b>c){
//     printf(" is greatest",b);
//  }
//  if (c>a && c>b){
//     printf("is greatest",c);
//  }
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
//     if(a+b>c && b+c>a && c+a>b){
//     printf("valid triangle")
//     ;
//         }
//         else{
//             printf("not valid triangle");
//         }
// }


// #include<stdio.h>
// int main(){
//     int a,b;
//     a=10;
//     b=-20;
//     printf("%d",a+b);
//     return 0;
// }



//  #include <stdio.h>
//  int main(void)
//  {
//  // output may depend upon the compiler
//  printf("My mobile number "
//  "is 7\a8\a7\a3\a9\a2\a3\a4\a0\a8\a");
//  return (0);
//  }


// #include <stdio.h>
//  typedef enum { false, true } bool;
//  int main()
//  {
//  bool a = true;
//  bool b = false;
//  printf("True : %d\n", a);
//  printf("False : %d", b);
//  return 0;
//  }


//  #include <stdio.h>  // For printf()
//  #include <stdbool.h>
//  // Main Function
//  int main() {
//  // Boolean data types declared
//  bool a = true;  // 'a' initialized to true
//  bool b = false; // 'b' initialized to false
 
//  printf("True : %d\n", a); 
// printf("False : %d\n", b); 
// return 0;
//  }



/*NESTED IF-ELSE */
// #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter a number:");
//     scanf("%d",&a);
//     if(a%5==0){
//         if(a%3==0){
//         printf("divisible by 5 and 3");
//         }
//     }
//     else{
//         printf("not divisible");
//     }
//     return 0;
// }


/*concept of heri.*/
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number");
//     scanf("%d",&n);
//     if(n%5==0 || n%3==0 && n%15!=0){
//         printf("divisible by 5 or 3 but not 15");

//     }
//     else{
// printf("not divisible");
//     }
// }

/*ELSE IF*/

// #include<stdio.h>
// int main(){
//     int sp , cp ;
//     printf("\n Enter sp:");
//     scanf("%d",&sp);
//     printf("\n Enter cp:");
//     scanf("%d",&cp);
//     if(sp>cp){
//         printf("profit");
//     }
//         else if(sp<cp){
//             printf("loss");
//         }
//         else{
//             printf("no profit ,no loss:");
//         }
//     }


/*TERNARY OPERATOR*/
// #include<stdio.h>
// int main(){
//     int x;
//     printf("Enter a number:");
//     scanf("%d",&x);
//     // exp1 ? exp2 :exp3
//     x%2==0 ? printf("Even number"):printf("odd number");
//     return 0;
// }


/*MCQ */


// #include<stdio.h>
// int main(){
//     int x=10 , y=20;
//     if(x==y);
//     printf("%d %d",x,y);
    
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int x=3,y=5;
//     if(x==3){
//         printf("\n%d",x);
//     }
//     else;
//     printf("\n%d",y);
    
//     return 0;
// }



// #include<stdio.h>
// int main(){
//     int x=3; 
//     float y=3.0;
//     if(x==y)
//      printf("\n xand y are equal");
    
//     else
//          printf("\n xand y are not equal");
//          return 0;
// }

// #include<stdio.h>
// int main(){
//     int x=5,y,z;
//     y=x=15;
//     z=x>15;
//     printf("\n x=%d y=%d z=%d",x,y,z);
// }


// #include<stdio.h>
// int main(){
//     int x=15;
//     printf("\n%d %d%d", x!=15, x=20 ,x<30);
// }


// #include<stdio.h>
// int main(){
//     int i=65;
//     char j='A';
//     if (i==j)
//     printf(" C is wow");
//     else
//     printf( "c is a headache");

// }


/*THE REAL THING*/
// #include<stdio.h>
// int main(){
//     int a;
//     if(3+2%5)
//     printf("this works");
//     if(a=10)
//     printf("Even this works");
//     if(-5)
//     printf( "surpisily Even this works");
    

/*LOOPS*/

// #include<stdio.h>
// int main(){
//     for (int i=1;i<=5;i++){
//     printf("Hello world");
//     }
// }

// #include<stdio.h>
// int main(){
//     for (int i=1;i<=5;i=i+1){
//     printf("Hello world");
//     }
// }


// #include<stdio.h>
// int main(){
//     for (int i=1; i<=7; i=i+1){
//         printf("Sakshi \n");

//     }
// }


// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     for (int i=1;i<=n;i++){
//         printf("Hello world\n");
//     }
// }


// #include<stdio.h>
// int main(){
//     int i;
//     for (i=1;i<=10;i=i+2){
//     printf("Hello world\n");
//     }
//     printf("%d",i);
// }


/*PRINT NUM 1 TO 100*/
// #include<stdio.h>
// int main(){
//     for ( int i=1;i<=100;i++){
//         printf("\n %d ",i);

//     }
// }





/*EVEN NUMBER*/
// #include<stdio.h>
// int main(){

//     for (int i=1;i<=100;i++){
//         if(i%2==0){
//     printf("\n%d",i);
//     }
// }
// }



/*IMPLICIT*/
//  #include <stdio.h>
//  int main()
//  {
//  int x = 10; // integer x
//  char y = 'a'; // character c
//  // y implicitly converted to int. ASCII
//  // value of 'a' is 97
//  x = x + y;
//  // x is implicitly converted to float
//  float z = x + 1.0;
//  printf("x = %d, z = %f", x, z);
//  return 0;
//  }




/*EXPLICIT*/
//  #include<stdio.h>
//  int main()
//  {
//  double x = 1.2;
//  // Explicit conversion from double to int
//  int sum = (int)x + 1;
//  printf("sum = %d", sum);
//  return 0;
//  }

   /*SCANF*/
//  #include <stdio.h>
//  // Driver code
//  int main() 
// {
//  int a, b;
//  printf("Enter first number: ");
//  scanf("%d", &a);
//  printf("Enter second number: ");
//  scanf("%d", &b);
//  printf("A : %d \t B : %d" , 
// a , b);
//  return 0;
//  }



/*STRING FORMAT SPECIFIER -%S IN C*/
//  #include <stdio.h>
//  int main()
//  {
//  char a[] = "Hi ";
//  printf("%s\n", a);
//  return 0;
//  }

 



//  #include <stdio.h>
// int main()
// {
//     int a = 10, b = 20;
//     if (!(a > 0 && b > 0)) {
//         // condition returned true but
//         // logical NOT operator changed
//         // it to false
//         printf("Both values are greater than 0\n");
//     }
//     else {
//         printf("Both values are less than 0\n");
//     }
//     return 0;
// }


// #include <stdio.h>
// int main()
// {
//     int a = 10, b = 20;
//     if (!(a > 0 && b > 0)) {
//         // condition returned true but
//         // logical NOT operator changed
//         // it to false
//         printf("Both values are greater than 0\n");
//     }
//     else {
//         printf("Both values are less than 0\n");
//     }
//     return 0;
// }




// #include <stdio.h>
// int main(){
//     // int a = -1, b = 20;
//     int a,b;
//     printf("enter first number: ");
//     scanf("%d",&a);
//     printf("enter second number: ");
//     scanf("%d",&b);
//     if (a > 0) {
//         // printf("Any one of the given value is greater than 0\n");
//         if(a%2==0){
//             printf("Even");
//         }
//         else{
//             printf("Odd");
//         }
//     }
//     else if(b>0){
//         if(b%2==0){
//             printf("Even");
//         }
//         else{
//             printf("Odd");
//         }
//     }
//     else {
//         printf("Both values are less than 0\n");
//     }
//     return 0;
// }



// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("\nEnter a number:-");
//     printf("\nEnter a number:-");
//    printf("\nEnter a number:-");
//      scanf("\n%d %d %d",&a,&b,&c);

//     if(a>b && a>c){
//         printf("a is greatest",a);

//     }
//     if(b>a && b>c){
//         printf("b is greatest",b);

//     }
//     if(c>a && c>a){
//         printf("c is greatest",c);

//     }
// //     return 0;

// }




// int main(){
//     int age;
//     int weight;
//     printf("enter age : ");
//     scanf("%d",&age);
//     printf("enter weight : ");
//     scanf("%d",&weight);

//     if (age>18 && weight>50){
//         printf("Eligible");
//     }
//     else {
//         printf("not eligible");
//     }
// }



// #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter a numebr:");
//     scanf("%d",&a);
//     if(a ==0){
//         printf("snipper gun");

//     }
//     else if(a ==8){
//         printf("AUG a23");

//     }
//      else if(a ==6){
//         printf("AKM");

//     }
//      else if(a ==4){
//         printf("Almost all guns");

//     }
//      else if(a ==2){
//         printf("AUG a23");
//         }

//     else {
//     printf("dont have  scope");
// }
//     }




/*LIST OF PRACTICAL*/
// #include<stdio.h>
// int main(){
//     printf("Hello, World!");
// }


// #include<Stdio.h>
// int main(){
//      int a;
//      printf("Enter a number:");
//      scanf("%d",&a);
// }



// #include <stdio.h>

// int main() {
//     float weight;
//     int age;
//     printf("Enter your weight (in kgs): ");
//     scanf("%f", &weight);
//     printf("Enter your age: ");
//     scanf("%d", &age);

//     if (weight >= 40 && (weight <= 110 || (weight > 110 && age >= 12))) {
//         if (age >= 12) {
//             printf(" bungee jumping!\n");
//             if (weight > 110) {
//                 printf("Extra ropes will be added.\n");
//             }
//         } else {
//             printf(" minimum age requirement for bungee jumping.\n");
//         }
//     } else {
//         if (weight < 40) {
//             printf("minimum weight requirement for bungee jumping.\n");
//         } else if (weight > 110) {
//             printf(" bungee jumping with extra ropes");
//         }
//     }

//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int choice;
//     printf("Choose an option:\n");
//     printf(" Add two numbers\n");
//     printf("Subtract two numbers\n");
//     printf("3 Multiply two numbers\n");
//     printf("Divide two numbers\n");
//     printf("Enter your choice: ");
//     scanf("%d", &choice);

//     switch (choice) {
//         case 1: {
//             int a, b;
//             printf("Enter two numbers: ");
//             scanf("%d %d", &a, &b);
//             printf("Result: %d\n", a + b);
//             break;
//         }
//         case 2: {
//             int a, b;
//             printf("Enter two numbers: ");
//             scanf("%d %d", &a, &b);
//             printf("Result: %d\n", a - b);
//             break;
//         }
//         case 3: {
//             int a, b;
//             printf("Enter two numbers: ");
//             scanf("%d %d", &a, &b);
//             printf("Result: %d\n", a * b);
//             break;
//         }
//         case 4: {
//             float a, b;
//             printf("Enter two numbers: ");
//             scanf("%f %f", &a, &b);
//             if (b != 0) {
//                 printf("Result: %.2f\n", a / b);
//             } else {
//                 printf("Division by zero is not allowed.\n");
//             }
//             break;
//         }
//         default:
//             printf("Invalid choice\n");
//     }

//     return 0;
// }





// #include <stdio.h>
// int main() {
//     int month;
//     printf("Enter month number (1-12): ");
//     scanf("%d", &month);
//     switch (month) {
//         case 1:
//             printf("January\n");
//             break;
//         case 2:
//             printf("February\n");
//             break;
//         case 3:
//             printf("March\n");
//             break;
//         case 4:
//             printf("April\n");
//             break;
//         case 5:
//             printf("May\n");
//             break;
//         case 6:
//             printf("June\n");
//             break;
//         case 7:
//             printf("July\n");
//             break;
//         case 8:
//             printf("August\n");
//             break;
//         case 9:
//             printf("September\n");
//             break;
//         case 10:
//             printf("October\n");
//             break;
//         case 11:
//         printf("November\n");
//             break;
//         case 12:
//         printf("December\n");
//             break;
//         default:
//             printf("Invalid month.\n");
//     }

//     return 0;
// }



// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     switch (n){
//         case 1:
//         printf("Welcome to Erangel map. You are inside forest");
//         break;
//         case 2:
//         printf("Welcome to Miramar map. You are inside Desert");
//         break;
//         case 3:
//         printf("Welcome to Sanhok map. You are inside rain forest");
//         break;
//         case 4:
//         printf("Welcome to Vikendi map. You are inside a show forest");
//         break;
//     }
//     return 0;


// }







// #include <stdio.h> 
// int main() {
  
//   int i = 10;
//   int j = 20;
   
//    switch(i) {

//     case 10:
//         printf("the value of i evaluated in outer switch: %d\n",i);
//     case 20:
//         switch(j) {
//            case 20:
//               printf("The value of j evaluated in nested switch: %d\n",j);
//         }
//    }
//    printf("Exact value of i is : %d\n", i );
//    printf("Exact value of j is : %d\n", j );
 
//    return 0;
// }



// #include<stdio.h>
// int main(){
//     int i=10,j=20;
//     scanf("%d %d",&i,&j);
//     if(i==10){
//         printf("he value of i evaluated in outer loop");
//     }
//     else if(i==20){
//      printf("he value of i evaluated in innerr switch");
//     }
//     else{
//         printf("the value is stoped:");
//     }
// }





// #include<Stdio.h>
// int main(){
//     int a=1;
//     for (; a<=5; a++){
//         printf("a: %d",a);
//     }
// }



// infinite loop 
// #include<stdio.h>
// int main(){
//     int a=1;
//     for(;;){
//         printf("a: %d\n", a);
//         a<=5;
//         a++;
//     }
//     return 0;
// }




/*FIBONACCI SERIES*/
// #include <stdio.h>

// void printFibonacci(int n) {
//     int t1 = 0, t2 = 1, nextTerm;
//     printf("Fibonacci Series: %d, %d, ", t1, t2);

//     for (int i = 1; i <= n-2; ++i) {
//         nextTerm = t1 + t2;
//         t1 = t2;
//         t2 = nextTerm;
//         printf("%d, ", nextTerm);
//     }
// }

// int main() {
//     int n;
//     printf("Enter the number of terms: ");
//     scanf("%d", &n);
//     printFibonacci(n);
//     return 0;
// }



// #include <stdio.h>

// int fibonacci(int n) {
//     if (n <= 1)
//         return n;
//     return fibonacci(n - 1) + fibonacci(n - 2);
// }

// int main() {
//     int n;
//     printf("Enter the number of terms: ");
//     scanf("%d", &n);

//     printf("Fibonacci Series: ");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", fibonacci(i));
//     }
//     printf("\n");

//     return 0;
// }



// #include <stdio.h>
// int main() {
//     int n, a = 0, b = 1, c, i = 0;
//     printf("Enter the number of terms: ");
//     scanf("%d", &n);
//     printf("Fibonacci Series: ");
//     while (i < n) {
//         printf("%d ", a);
//        c = a + b;
//         a = b;
//         b = c;
//         i++;
//     }
//     printf("\n");

//     return 0;
// }



/*AND*/
// #include <stdio.h>
// int main() {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     if (n & 1)
//         printf("%d is Odd\n", n);
//     else
//         printf("%d is Even\n", n);

//     return 0;
// }


// #include <stdio.h>
// int main() {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     if (n | 1)
//         printf("%d is Odd\n", n);
//     else
//         printf("%d is Even\n", n);

//     return 0;
// }




/*EVEN OR ODD*/
// #include<stdio.h>
// int main(){
//     int num;
//     printf("Enter any number: ");
//     scanf("%d",&num);
//     (num%2==0)?printf("even\n"):printf("odd\n");
//     return 0;
// }



/*VOWEL AND CONSONANTS*/
// #include <stdio.h>
// int main() {
//     char ch;
//     printf("Enter a character: ");
//     scanf("%c", &ch);
//     if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
//         ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
//         printf("%c is a Vowel\n", ch);
//     }
//     else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
//         printf("%c is a Consonant\n", ch);
//     }
//     else{
//         printf("%c is not an alphabet\n", ch);
//     }

//     return 0;
// }


/*LEAP YEAR*/
// #include <stdio.h>
// int main(){
//     int a;
//     printf("Enter a year:");
//     scanf("%d",&a);
//     if((a%4==0 && a%100!=0) || a%400==0){
//        printf("Leap Year"); 
//     }
//     else{
//         printf("Not a Leap Year");
//     }

/*IS ELSE IF*/
// #include<stdio.h>
// int main(){
//     int i=10,j=20;
//     scanf("%d %d",&i,&j);
//     if(i==10){
//         printf("he value of i evaluated in outer loop");
//     }
//     else if(i==20){
//      printf("he value of i evaluated in innerr switch");
//     }
//     else{
//         printf("the value is stoped:");
//     }
// }










