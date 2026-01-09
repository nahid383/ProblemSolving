// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);

//     for(int i=0; i<=n; i++){

//             for(int j=0; j<2*(n-1); j++){
//                 printf(" ");
//             }
   
        


//         for(int j=0; j<=i; j++){
//             if(j!=0){
//                 printf(" ");
//             }
//                 printf("%d",j);
//         }
 
//         for(int j=i-1; j>=0; j--){
//             // if(j==0){
//             //     printf("%d",j);
//             // }
//             // else{
//             //     printf("%d ",j);
//             // }
//             printf(" %d",j);
 
//         }
 
//         printf("\n");
 
//     }
 
 
//     // for(int i=0; i<=n; i++){
//     //     printf("%d ",i);
//     // }
 
 
//     // for(int i=n-1; i>=0; i--){
//     //     if(i==0){
//     //         printf("%d",i);
//     //     }
//     //     else{
//     //         printf("%d ",i);
//     //     }
//     // }
 
 
//     // printf("\n");
 
 
//     // for(int i=0; i<n-1; i++){
 
//     //     for(int j=0; j<=i; j++){
//     //         printf("  ");
//     //     }
 
//     //     for(int j=0; j<n-i; j++){
//     //         printf("%d ",j);
//     //     }
 
//     //     for(int j=n-i-2; j>=0; j--){
//     //         if(j==0){
//     //             printf("%d",j);
//     //         }
//     //         else{
//     //             printf("%d ",j);
//     //         }
 
//     //     }
 
//     //     printf("\n");
 
      
    

#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    for(int i=0; i<=n; i++){
        for(int j=0; j<2*(n-i); j++){
            printf(" ");
        }
        for(int j=0; j<=i; j++){
            if(j!=0) 
            printf(" ");
            printf("%d",j);
        }
        for(int j=i-1; j>=0; j--){
            printf(" %d",j);
        }
        printf("\n");
    }

    for(int i=n-1; i>=0; i--){
        for(int j=0; j<2*(n-i); j++){
            printf(" ");
        }
        for(int j=0; j<=i; j++){
            if(j!=0)
            printf(" ");
            printf("%d",j);
        }
        for(int j=i-1; j>=0; j--){
            printf(" %d",j);
        }
        printf("\n");
    }

    return 0;
}
//     // }
//     // for(int i=0; i<2*n; i++){
//     //     printf(" ");
//     // }
//     // printf("0\n");
//     for(int i=n-1; i>=0; i--){
//         for(int j=0; j<2*(n-1); j++){
//             printf(" ");
//         }
//         for(int j=0; j<=i; j++){
//             if(j!=0){
//                 printf(" ",j);
//             }
//                 printf("%d",j);
//         }
//         for(int j=i-1; j>=0; j--){
//             printf(" %d",j);
//         }
//         printf("\n");
//     }
   
// }