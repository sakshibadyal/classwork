/*LOOPS*/
/*for loop*/
// #include<stdio.h>
// int main(){
//     for(int i=1;i<=9;i++){
//         printf("Sakshi Badyal\n");
//     }
//     return 0;
// }


/*print hello world'n' times.Take'n' as input from user*/
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a num:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         printf("hello world\n");
//     }
// }


/*print number from 1 to 100*/
// #include<stdio.h>
// int main(){
//     for(int i=1;i<=100;i++){
//         printf("%d \n",i);
//     }
// }


/*print all the even num from 1 to 100*/
// #include<stdio.h>
// int main(){
//    for(int i=1;i<=100;i++){
//     if(i%2==0)
//     printf("%d",i);
   
// }
// }


/*print all the odd numbers 1 to 100*/
// #include<stdio.h>
// int main(){
//    for(int i=1;i<=100;i++){
//     if(!(i%2==0))
//     printf("%d",i);
   
// }
// }


/*print table of 19*/
// #include<stdio.h>
// int main(){
//    for(int i=19;i<=190;i=i+19){
//     printf("%d ",i);
   
// }
// }


/*Display the AP - 1,3,4,5,7,9*/
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
    
//     for(int i=1;i<=2*n-1;i=i+2){
//         printf("%d",i);
//     }
// }



/*Display  the AP - 4,7,10,13,16 upro n term*/
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
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     for (int i = 1; i <= n; i++){
//         for (int j = 1; j <= i; j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     int num;
//     int i;
//     scanf("%d",&num);
//     for(i=1;i<=10;i++){
//         printf("%d x %d = %d\n",num,i,num*i);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int num;
//     int i;
//     scanf("%d",&num);
//     for(i=1;i<=10;i++){
//         printf("%d x %d = %d\n",num,i,num*i);
//     }
//     return 0;
// }



// #include <stdio.h>
// int main(){
//     int num;
//     int i;
//     scanf("%d",&num);
//     for(i=1;i<=10;i++){
//         printf("%d x %d = %d\n",num,i,num*i);
//     }
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     int num;
//     int i;
//     scanf("%d",&num);
//     for(i=1;i<=10;i++){
//         printf("%d x %d = %d\n",num,i,num*i);
//     }
//     return 0;
// }


/*CONTINUE STATEMENT*/
// #include <stdio.h>
// int main(){
//     int num;
//     int i;
//     scanf("%d",&num);
//     for(i=1;i<=10;i++){
//         printf("%d x %d = %d\n",num,i,num*i);
//     }
//     return 0;
// }

/*PRINT ALL THE OFF NUMBERS FROM 1 TO 100*/
// #include<stdio.h>
// int main(){
//     for( int i=1;i<=100;i++){
//         if(!(i%2==0)){
//             printf("%d ",i);
//         }
//     }}



/*print the teble of 19*/
// #include<stdio.h>
// int main(){
//     for( int i=19;i<=190;i=i+19){
//         printf("%d\n",i);

//     }
// }


/*PRINT THE TABLE OF 'n'.HERE 'n' IS A INTEGER WHICH USER WILL INPUT*/
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     for(int i=1;i<=10;i++){
//         printf("%d\n",n*i);
//     }
// }


/*PROGRAM TO FIND THE SUM OF NATURAL NUMBERS USINGRECURSION*/
// #include <stdio.h>
// int sum(int n);
// int main() {
//     int number, result;
//     printf("Enter a positive integer: ");
//     scanf("%d", &number);
//     result = sum(number);
//     printf("sum = %d", result);
//     return 0;
// }
// int sum(int n) 
// {
//     if (n != 0)
//     return n + sum(n-1);   // sum() function calls itself
//     else
//     return n;
// }


/*DISPLAY THIS AP - 1,3,5,7,9....UPTO 'n' TERMS*/
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     for(int i=1;i<=2*n-1;i=i+2){
//         printf("%d ",i);
//     }
// }


/*DISPLAY THIS AP - 4,7,10,13,16.... UPTO 'n' TERMS*/
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     for(int i=4;i<=3*n-1;i=i+3){
//         printf("%d ",i);
//     }
// }


/*AP WITHOUT MATHS*/
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
 


/*DIAPLAY THIS GP -1,2,4,8,16,32... UPTO 'n' TERMS*/
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


/*DISPLAY THE GP- 3,12,48 .. UPTO 'n' TERMS*/
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


/*DISPLAY THIS AP-100, 97,94.. UPTO ALL TERMS WHIVH ARE +VE*/
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     int a=100;
//     for(int i=1;a>0;i++){
//         printf("%d ",a);
//         a=a-3;
//     }
// }


/* using while loop*/
// #include<stdio.h>
// int main(){
//     int a=100;
//     while(a>0){
//         printf("%d ",a);
//         a=a-3;
//     }
// }



/*DISPLAY THE GP -100,50,25.. UPTO 'n' TERMS*/
// #include<stdio.h>
// int main(){
//     int a=100;
//     while(a>0){
//         printf("%d ",a);
//         a=a*1/2;
//     }
// }


/*DISPLAY THE GP -100,50,25.. UPTO 'n' TERMS*/
//#include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     int a=100;
//     for(int i=1;i<=n;i++ ){
//         printf("%d ",a);
//         a=a*1/2;
//     }
// }




/*BREAK*/
/*WAP TO CHECK IF A NUMBER IS PRIME OR NOT*/
//#include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     for(int i=2;i<=n-1;i++){
//         if(n%i==0){
//             printf("Our no is compositive:");
//             break;
//         }

//     }

// }




/**/
// #include<stdio.h>
// void add(int x ,int y);
// int main(){
//     add(2,3);
//     return 0;
// }
// void add(int x,int y){
//     int sum=x+y;
//     printf("SUM: %d",sum);
// }

// #include<stdio.h>
// void add(int x ,int y);
// int main(){
//     add(2,3);
//     return 0;
// }
// void add(int x,int y){
//     int sum=x+y;
//     printf("SUM: %d",sum);
// }



// #include <stdio.h>
// #include <math.h>
// int main() {
//     double num, result;
//     printf("Enter a number: ");
//     scanf("%lf", &num);
//     if (num < 0) {
//         printf("Square root of a negative number is not real.\n");
//     } else {
//         result = sqrt(num);
//         printf("Square root of %.2lf is %.2lf\n", num, result);
//     }
//     return 0;
// }


// #include<stdio.h>
// #include<math.h>
// int main(){
//     int a;
//     printf("enter a number: ");
//     scanf("%d",&a);
//     int squareroot=sqrt(a);
//     printf("%d",a);
//     return 0;
// }




// #include <stdio.h>
// struct Employee {
//     int id;
//     char name[50];
//     float salary;
// };
// void inputEmployee(struct Employee *emp) {
//     printf("Enter Employee ID: ");
//     scanf("%d", &emp->id);
//     printf("Enter Employee Name: ");
//     scanf("%[^\n]", emp->name);
//     printf("Enter Employee Salary: ");
//     scanf("%f", &emp->salary);
// }
// void displayEmployee(struct Employee emp) {
//     printf("\nEmployee Details:\n");
//     printf("ID: %d\n", emp.id);
//     printf("Name: %s\n", emp.name);
//     printf("Salary: %.2f\n", emp.salary);
// }
// int main() {
//     struct Employee emp;
//     inputEmployee(&emp);
//     displayEmployee(emp);
//     return 0;
// }



// #include<stdio.h>
// #include<math.h>
// void employee(char name[100],int id){
//     return ;
// }
// int main(){
//     char name[100];
//     int id;
//     printf("Enter a number:");
//     scanf("%s",&name);
//     printf("Enter a number:");
//     scanf("%d",&id);
//     employee(name,id);
//     printf("Name: %s ID: %d",name,id);
// }


#include<stdio.h>


