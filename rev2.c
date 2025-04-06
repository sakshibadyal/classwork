// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a num:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         printf("%d ",i);
//     }
// }


// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
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
//     for(int i=1;i<=100;i++)
//     {if(i%2!=0){
//         printf("%d ",i);
//     }}
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
//         printf("%d X %d=%d\n",n,i,n*i);
//     }

// }


// #include<stdio.h>
// int main (){
//     int n;
//     printf("Enter a numebr:");
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
//     printf("enter a number:");
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
//     for(int i=1;i<=n;i++){
//         printf("%d ",a);
//         a=a-50;

//     }
// }


// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a numeber:");
//     scanf("%d",&n);
//     for(int i=2;i<=n-1;i++){
//         if(n%i==0){
//             printf("no is composite:");
//             break;

//         }
//         else{
//             printf("prime");
//             break;
//         }
      
//     }
    
// }


// #include<stdio.h>
// int main(){
// for(int i=1;i<=100;i++){
//     if(i%2!=0){
//         printf("%d ",i);
//     }
// }
// }


// #include<stdio.h>
// int main(){
// for(int i=1;i<=100;i++){
//     if(i%2==0){
//        continue;
//     }
//     printf("%d ",i);
// }
// // }

// #include<stdio.h>
// int main(){
//     for(int i=1;i<=100;i++){
//         if(i%2!=0){
//             continue;
//         }
//         printf("%d ",i);
//     }
// }


// #include<stdio.h>
// int main(){
// int n;
// printf("Enter a num:");
// scanf("%d",&n);
// int count=0;
// while(n!=0){
//     n=n/10;
   
//     count++;
    

// }
// printf("%d ",count);

// }

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a num");
//     scanf("%d",&n);
//     int sum=0,lastdigit=0;
//     while(n!=0){
//         lastdigit=n%10;
//         sum=sum+lastdigit;
//         n=n/10;
//     }
//     printf("%d ",sum);
// }

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a num:");
//     scanf("%d",&n);
//     int sum=0,lastdigit=0;
//     while(n!=0){
       
      
//         lastdigit=n%10;
//         if(lastdigit%2==0){
//         sum=sum+lastdigit;
//         }
//         n=n/10;
    
// }
//     printf("%d ",sum);
// }



// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter  a number:");
//     scanf("%d",&n);
//     int sum=0,ld=0;
//     while(n!=0){
//         ld=n%10;
//         if(ld%2!=0){
//             sum=sum+ld;
//         }
//         n=n/10;
//     }
//     printf("%d ",sum);
// }

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a num");
//     scanf("%d",&n);
//     int r=0,ld=0;;
//     while(n!=0){
//         ld=n%10;
//         r=r*10+ld;
//         n=n/10;
//     }
//     printf("%d ",r);

// }


// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a num");
//     scanf("%d",&n);
//     int r=0,ld=0,sum=0;
//     while(n!=0){
//         ld=n%10;
//         r=r*10+ld;
//         sum=sum+ld;
//         n=n/10;
//     }
//     printf("%d ",sum);

// }




// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         if(n%2!=0)
//         sum=sum+i;
//         else sum=sum-i;
//     }
//     printf("%d ",sum);
// }


// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a numebr:");
//     scanf("%d",&n);
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         if(n%2==0){
//            sum=-n/2;
//         }
//         else{
//             sum=-n/2+n;
//         }
//     }
//     printf("%d ",sum);
// }


// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a num");
//     scanf("%d",&n);
//     int fact=1;
//     for(int i=1;i<=n;i++){
//       fact=fact*i;
//         printf("%d ", fact);
//     }
// }

// #include<stdio.h>

// int main(){
//     int n;
//     printf("Enter a num");
//     scanf("%d",&n);
//     int fact=1;
//     for(int i=1;i<=n;i++){
//       fact=fact*i;
        
//     }
//     printf("%d ", fact);
// }



// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a num");
//     scanf("%d",&n);
//     int a=1,b=1,sum=1;
//     for(int i=1;i<=n-2;i++){
// sum=a+b;
// a=b;
// b=sum;
// printf("%d ", sum);        
//     }
    
// }


// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     int a=0,b=1,sum;
//     for(int i=1;i<=n;i++){
//         printf("%d",a);
//         sum=a+b;
//         a=b;
//         b=sum;
//     }
// }


//#include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a num");
//     scanf("%d",&n);
//     int m;
//     printf("Enter a num");
//     scanf("%d",&m);
//     int power=1;
//     for(int i=1;i<=m;i++){
//         power=power*n;
     
//     }
//     printf("%d ",power);
// }
