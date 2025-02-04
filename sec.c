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


#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int a=5;
    for(int i=1;i<=n;i++){
        printf("%d ",i);
        a=a+2;

    }
}
