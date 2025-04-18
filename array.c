// #include<stdio.h>
// int main(){
//     int arr[5]={20,30,40,50,60};
//     for(int i=0;i<=4;i++){
//         printf("%d ",arr[i]);
//     }
    
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int arr[5]={2,4,5,6,4};
//     for(int i=0;i<=4;i++){
//
//       scanf("%d ", arr[i]);
//     }
//     return 0;
// }



// #include<stdio.h>
// int main(){
//   int arr[5];
//   for(int i=0;i<=4;i++){
// printf("Enter  element:%d\n",i+1);
//    scanf("%d ",&arr[i]);
//   }
// for(int i=4;i>=0;i--){
//     printf("%d ",arr[i]);
// }
// }


// #include<stdio.h>
// int main(){
//     int arr[10]={5,52,84,74,16,35,62,20,69,25};
// for(int i=0;i<10;i++){
//     if(arr[i]<35){
//         printf("%d ",arr[i]);
//     }
// }

// }




// #include<stdio.h>
// int main(){
//     int arr[6]={1,2,3,4,5,6};
//     int sum=0;
//     for(int i=0;i<=5;i++){
//         sum=sum+arr[i];
//     }
//     printf("%d ",sum);
// }


// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a num");
//     scanf("%d ",&n);
//     int arr[n];
    
//     for(int i=0;i<=n-1;i++){
//         scanf("%d ",&arr[i]);
//     }for(int i=0;i<=n-1;i++){
//         printf("%d ",arr[i]);
//     }
// }


// #include<stdio.h>
// int main(){
//     int arr[6]={1,2,3,4,5,6};
//     int product=1;
//     for(int i=0;i<=5;i++){
//         product=product*arr[i];
//     }
//     printf("%d ",product);
// }



// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter num:");
//     scanf("%d ",&n);

//     int arr[n];
//     for(int i=0;i<=n-1;i++){
//         scanf("%d ",&arr[i]);
//     }
//     int product=1;
//     for(int i=0;i<=n-1;i++){
//       product=product*arr[i];
//     }
//     printf("%d ", product);

// }





// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter num:");
//     scanf("%d ",&n);

//     int arr[n];
//     for(int i=0;i<=n-1;i++){
//         scanf("%d ",&arr[i]);
//     }
//     int max=-1;
//     for(int i=0;i<=n-1;i++){
//      if(max <arr[i]){
//         max=arr[i];
//      }
//     }
//     printf("%d ",max);

// }


// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter num:");
//     scanf("%d ",&n);

//     int arr[n];
//     for(int i=0;i<=n-1;i++){
//         scanf("%d ",&arr[i]);
//     }
//     int max=arr[0];
//     for(int i=0;i<=n-1;i++){
//      if(max>arr[i]){
//         max=arr[i];
//      }
//     }
//     printf("%d ",max);

// }





// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter num:");
//     scanf("%d ",&n);

//     int arr[n];
//     for(int i=0;i<=n-1;i++){
//         scanf("%d ",&arr[i]);
//     }
//     for(int i=0;i<=n-1;i++){
//      if(i%2!=0){
//     arr[i]*=2;
//      }
//    else{
//    arr[i]+=10;
//    }
//     }
//     for(int i=0;i<=n-1;i++){
//         printf("%d ",arr[i]);
//     }
// }




// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a num:");
//     scanf("%d",&n);
// int arr[n];
// int x=6;
//     for(int i=0;i<=n-1;i++){
//         scanf("%d ",&arr[i]);
//     }
//     int count =0;
//     for(int i=0;i<=n-1;i++){
//         if(arr[i]>x)
//         count++;
//     }
//     for(int i=0;i<=n-1;i++){
//        printf("%d ",arr[i]);
//     }
// }






// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a num:");
//     scanf("%d",&n);
// int arr[n];
//     for(int i=0;i<=n-1;i++){
//         scanf("%d ",&arr[i]); 
//     }
//     int sumodd=0,sumeven=0;
//     for(int i=0;i<=n-1;i++){
//         if(i%2!=0)
//        sumodd=sumodd+arr[i];//1+3+5=9
//        else {
//         sumeven=sumeven+arr[i]; //2+4=6
//         }
//     }
//     printf("%d",sumodd-sumeven);

// }





// #include<stdio.h>
// int main(){
//     int n,m;
//     printf("Enter a num:");
//     scanf("%d %d ",&n,&m);
// int arr[n];

//     for(int i=0;i<=n-1;i++){
//         scanf("%d ",&arr[i]); 
//     }
//     int count =0;
//     int x=m;
//     for(int i=0;i<=n-1;i++){
//        for(int j=0;j<=n-1;j++){
//         if(arr[i]+arr[j]==x){
//            count++;
              
// printf("(%d %d)\n",arr[i],arr[j]);
//         }
//        }
//     }
   
// printf("%d",count);
// }




// #include<stdio.h>
// int main(){
//     int n,m;
//     printf("Enter a num:");
//     scanf("%d %d ",&n,&m);
// int arr[n];

//     for(int i=0;i<=n-1;i++){
//         scanf("%d ",&arr[i]); 
//     }
//     int count =0;
//     int x=m;
//     for(int i=0;i<=n-1;i++){
//        for(int j=0;j<=n-1;j++){
//         for(int k=0;k<=n-1;k++){
//         if(arr[i]+arr[j]+arr[k]==x){
//            count++;
              
// printf("(%d %d %d)\n",arr[i],arr[j],arr[k]);
//         }
//        }
//     }
// }
   
// printf("%d",count);
// }



// #include<stdio.h>
// #include<limits.h>
// int main(){
//     int n;
//     printf("Enter num:");
//     scanf("%d ",&n);

//     int arr[n];
//     for(int i=0;i<=n-1;i++){
//         scanf("%d ",&arr[i]);
//     }
//     int max=-1;
//     int secmax=-1;
//     for(int i=0;i<=n-1;i++){
//      if(max <arr[i]){
//         max=arr[i];
//      }
//     }
//     for(int i=0;i<=n-1;i++){
//         if(secmax <arr[i] && arr[i]!=max){
//            secmax=arr[i];
//         }
//        }
//     printf("%d ",secmax);

// }



// #include<stdio.h>
// int main(){
//         int n;
//     printf("Enter num:");
//     scanf("%d ",&n);
//     int arr[n];
//     int brr[n];
//     for(int i=0;i<=n-1;i++){
//         scanf("%d ",&arr[i]);
//     }

//     for(int i=0;i<=n-1;i++){
//         brr[i]=arr[n-1-i];
//     }
//     for(int i=0;i<=n-1;i++){
//       printf("%d ",brr[i]);
//     }
//     printf("\n");
// }


// #include<stdio.h>
// void reverse(int arr[]){
// int i=0;
// int j=n-1;
// while(i<=j){
//     int temp=arr[i];
//     arr[i]=arr[j];
//     arr[j]=temp;
//     i++;
//     j--;
// }
// }
// int main(){
//         int n;
//     printf("Enter num:");
//     scanf("%d ",&n);
//     int arr[n];
   
//     for(int i=0;i<=n-1;i++){
//         scanf("%d ",&arr[i]);
//     }
//     reverse(arr);
//     for(int i=0;i<=n-1;i++){
//               printf("%d ",arr[i]);
//             }
    
// }




// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a num:");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<=n-1;i++){
//         scanf("%d ",&arr[i]);
// }
// for(int i=n-1;i>=0;i--){
//     printf("%d ",arr[i]);
// }
// }




// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a num:");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<=n-1;i++){
//         scanf("%d ",&arr[i]);
//     }
//     for(int i=0;i<=n-1;i++){
//         if(arr[i]<=35){
//             printf("%d ",arr[i]);
//         }
        
//     }
// }






// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a num:");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<=n-1;i++){
//         scanf("%d ",&arr[i]);
//     }
// int sum=0;
//     for(int i=0;i<=n-1;i++){
//         sum=sum+arr[i];
        
//     }
//     printf("%d ",sum);
// }






// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a num:");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<=n-1;i++){
//         scanf("%d ",&arr[i]);
//     }
//     int product=1;
//     for(int i=0;i<=n-1;i++){
//         product=product*arr[i];
//     }
//     printf("%d ",product);
// }





#include<stdio.h>
int main(){
    int n;
    printf("Enter a num:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d ",&arr[i]);
    }
int max=-1;
for(int i=0;i<=n-1;i++){
    if(max<arr[i]){
        max=arr[i];
    }
   
}
printf("%d",max);
}

