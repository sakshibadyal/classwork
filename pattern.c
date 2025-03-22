// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     for(int i=1;i<=4;i++){
//         for(int i=1;i<=n;i++){
//         printf("* ");
//     }
//     printf("\n");
// }
// }


// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     for(int i=1;i<=4;i++){
//         for(int i=1;i<=n;i++){
//             printf("%d ",i);
//         }
//         printf("\n");
//     }
// }


// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     for(int i=1;i<=4;i++){
//         for(int j=1;j<=i;j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }


// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n+1-i;j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }


// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n+1-i;j++){
//             printf("%d",j);
//         }
//         printf("\n");
//     }
// }


// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     int a;
//     for(int i=1;i<=n;i++){
//          a=n;
//         for(int j=1;j<=a;j++){
//             printf("* ");
//         }
//         a--;
//         printf("\n");
//     }
// }


// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
// }



// #include<stdio.h>
// int main(){
//     int n;
//     scanf("Enter a number:");
//     printf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n+1-i;j++){
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
// }










// #include<stdio.h>
// int main(){
//     auto int x;
//     printf("%d",&x);
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int a;
//     char b; 
//     float c;
//     printf("%d%c%f",a,b,c);
//     return 0;
// }

// #include<stdio.h>
// int fun()
// {
// static int count = 0; //Initialized only once
// count++;  //shared among multiple function
// return count;
// }
// int main()
// {
// printf("%d ", fun()); //count=1
// printf("%d ", fun()); //count=2
// return 0;
// }



// #include<stdio.h>
// int main(){
//   int n;
//   printf("Enter a number:");
//   scanf("%d",&n);
//   for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//       printf("%d",j);
//     }
//     printf("\n");
//   }
// }


// #include<stdio.h>
// int main(){
//   int n;
//   printf("Enter a  number:");
//   scanf("%d",&n);
//   for(int i=1;i<=n;i++){
//     for(int j=1;j<=n+1-i;j++){
//     printf("%d", j);
//   }
//   printf("\n");
// }
  
// }


// #include <stdio.h>
// int main(){
//     int a, *p;
//     printf("Enter tha value of a: ");
//     scanf("%d",&a);
//     a=10;
//     p=&a;
//     printf("Value of a is: %d",*p);
//     return 0;
// }



// #include <stdio.h>
// int main(){
//     int a, *p;
//     printf("Enter tha value of a: ");
//     scanf("%d",&a);
//     a=10;
//     p=&a;
//     printf("Value of a is: %d",*p);
//     printf("Value of a is: %d",p);
//     return 0;
// }



// #include <stdio.h>
// int main(){
//     int x=10;
// int y=20;
//     int *ptr1=&x;
//     int *ptr2=&y;
//     ptr1= ptr2;
//     printf("%d \n%d\n",*ptr1,*ptr2);
//     printf("%d\n%d\n",ptr1,ptr2);
//     return 0;
// }



// #include <stdio.h>
// int main(){
//     int a=25,b=36;

//     int *ptr,*ptr1;
//   ptr=&a;
//     ptr1= &b;
   
//     printf("%d \n%d\n",*ptr,*ptr1);
//     printf("%d \n%d\n",ptr,ptr1);
  
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         int a=1;
//         for(int j=1;j<=n;j++){
//             printf("%d ",a);
//             a=a+2;
//         }
//         printf("\n");
//     }
// }



// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=2*n-1;j=j+2){
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
// }



// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         int a=1;
//         for(int j=1;j<=i;j++){
//             printf("%d ",a);
//             a=a+2;
//         }
//         printf("\n");
//     }
// }


// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         int a=1;
//         for(int j=1;j<=n;j++){
//             int d=a+64;
//             char ch=(char)d;
//             printf("%c ",ch);
//             a++;
//         }
//         printf("\n");
//     }
// }




// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
// }


// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         if(i%2!=0){
//         for(int j=1;j<=i;j++){
//             printf("%d ",j);
//         }
//     }
    
//         else{
//                 for(int j=0;j<i;j++){
//             printf("%c " ,'A'+j);
//                 }
//         }
//         printf("\n");
//     }
// }




// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             int a=n/2+1;
//             if(j==a || i==a)
//             printf("*");
//             else
//             printf(" ");
//         }
//         printf("\n");
//     }
// }



// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     int m;
//     printf("Enter a number:");
//     scanf("%d",&m);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=m;j++){
           
//             if(i==1 || i==n || j==1 || j==m)
//             printf("*");
//             else
//             printf(" ");
//         }
//         printf("\n");
//     }
// }




// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
           
//             if(i==j || i+j == n+1)
//             printf("*");
//             else
//             printf(" ");
//         }
//         printf("\n");
//     }
// }


// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     int a=1;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             printf("%d ",a);
//             a++;
//         }
//         printf("\n");
//     }
// }




// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     int a=1;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             printf("%d ",a);
//             a=a+2;
//         }
//         printf("\n");
//     }
// }




// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     int a=1;
//     for(int i=1;i<=n;i++){
//         if(i%2!=0) a=1;
//         else a=0;
//         for(int j=1;j<=i;j++){
//             printf("%d ",a);
//             if(a==0) a=1;
//             else a=0;
        
//         }
//         printf("\n");
//     }
// }




// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             printf(" ");
          
//         }
//         for(int k=1;k<=i;k++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }


// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             printf(" "); 
            
//         }
//         int a=1;
//         for(int k=1;k<=n;k++){
            
//             printf("*");
           
//         }
//         printf("\n");
//     }
// }




// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             printf(" "); 
            
//         }
        
//         for(int k=1;k<=i;k++){
//             int d=k+64;
//             char ch=(char)d;
//             printf("%c ",ch);
            
//         }
//         printf("\n");
//     }
// }




// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     int a=1;
//     for(int i=1;i<=n;i++){
//         for(int k=1;k<=n-i;k++){
//             printf(" "); 
            
//         }
//         for(int j=1;j<=a;j++){
//             printf("*"); 
            
//         }
         
//         a=a+2;
      
//         printf("\n");
//     }
// }



// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a  numebr:");
//     scanf("%d",&n);
//     int a=n-1;
//     for(int i=1;i<=n;i++){
//         int b=i-1;
//         for( int k=1;k<=a;k++){
//             printf(" ");
//         }
//         a--;
//         for( int j=1;j<=i;j++){
//             printf("%d " ,j);
         
//         }
//         for( int m=1;m<=i-1;m++){
//             printf("%d " ,b);
//             b--;
         
//         }

//         printf("\n");
//     }
// }





// #include <stdio.h>
// int main()
// {
// int a=20;
// int *p;
// p=&a;
// printf("Pointer before Incrent: ");

// printf("%p\n", p);

// p++;

// printf("Pointer after increment: ");

// printf("%p\n", p);

// return 0;
// }



// #include<stdio.h>
// int main(){
//     int  x=50;
//     int * ptr1=&x;
//     int * ptr2=&x;
//     int  y= --*ptr2;
//     printf("%d%d",--*ptr1,y);
//     return 0;
// }




// #include<stdio.h>
// int main(){
//     int  num1,num2,sum;
//     int *ptr1,*ptr2;
//     ptr1=&num1;
//      ptr2=&num2;
//      printf("Enter a number:");
//     scanf("%d%d",ptr1, ptr2);
//     sum=*ptr1+*ptr2;
//     printf("sum =%d",sum);
//     return 0;
// }



// #include<stdio.h>
// int main(){
//     int *p1,*p2;
//     p1=(int *)1;
//     p2=(int  *)2;
//     if(p2>p1){
//     printf("p2 is greater");
//     }
   
//     else
//     printf("p1 is greater ");
// }



// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a numebr:");
//     scanf("%d",&n);
//     int nsp=n/2;
//     int nst=1;
//     int ml=n/2+1;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=nsp;j++){
//             printf(" ");   
//         }
//         for(int k=1;k<=nst;k++){
//             printf("*");
//         }
//         if(i<ml){
//             nsp--;
//             nst+=2;
//         }
//         else{
//             nsp++;
//             nst-=2;
     
//         }
//         printf("\n");
//     }
// }



// #include <stdio.h>
// int main() {
//     int arr[5];  
//     printf("Enter 5 numbers:\n");
//     for(int i = 0; i < 5; i++) {
//         printf("Enter number %d: ", i+1);
//         scanf("%d", &arr[i]);
//     }
//     printf("\nThe numbers you entered are:\n");
//     for(int i = 0; i < 5; i++) {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }




// #include <stdio.h>
// int main() {
//     int array[] = {10, 20, 30, 40, 50};
//     int index = 2;
//     int element = array[index];
//     printf("Element at index %d: %d\n", index, element);  
    
//     return 0;
// }


// #include<stdio.h>
// int main() {
//     int n;
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);

//     int arr[n];
//     printf("Enter %d elements:\n", n);
//     for (int i = 0; i < n; i++) {
//         printf("Enter element %d: ", i + 1);
//         scanf("%d", &arr[i]);
//     }

//     printf("You entered: ");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
    
//     return 0;
// }



// #include <stdio.h>
// int main() {
//     int array[] = {10, 20, 5, 40, 15};
//     int n = sizeof(array) / sizeof(array[0]); 
//     int largest = array[0];
//     int smallest = array[0];
//     for (int i = 1; i < n; i++) {
//         if (array[i] > largest) {
//             largest = array[i]; '.lokuh6tesq`    `   
//         }
//         if (array[i] < smallest) {
//             smallest = array[i];
//         }
//     }
//     printf("Largest number: %d\n", largest);
//     printf("Smallest number: %d\n", smallest);
//     return 0;
// }



// #include <stdio.h>
// int main(){
//     int array1[] = {10, 20, 30};
//     int array2[] = {40, 50, 60};
//     int n1 = sizeof(array1) / sizeof(array1[0]); 
//     int n2 = sizeof(array2) / sizeof(array2[0]); 
//     int array3[n1 + n2];
//     for (int i = 0; i < n1; i++) {
//         array3[i] = array1[i];
//     }
//     for (int i = 0; i < n2; i++) {
//         array3[n1 + i] = array2[i];
//     }
//     printf("Elements of the third array: ");
//     for (int i = 0; i < n1 + n2; i++) {
//         printf("%d ", array3[i]);
//     }
//     printf("\n");
//     return 0;
// }


#include <stdio.h>
int main() {
int n1, n2, i;
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter %d elements for first array: ", n1);
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter size of second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter %d elements for second array: ", n2);
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }
    int arr3[n1 + n2];
    for(i = 0; i < n1; i++) {
        arr3[i] = arr1[i];
    }
    for(i = 0; i < n2; i++) {
        arr3[n1 + i] = arr2[i];
    }
    printf("Combined array: ");
    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", arr3[i]);
    }
    return 0;

}
