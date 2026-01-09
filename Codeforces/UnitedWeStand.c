// #include<stdio.h>

// void sorting(int a[], int size){
//     for(int i=0; i<size-1; i++){
//         for(int j=i+1; j<size; j++){
//             if(a[i]>a[j]){
//                 int temp = a[i];
//                 a[i]=a[j];
//                 a[j]=temp;
//             }
//         }
//     }
// }


// int main(){
//     int t;
//     scanf("%d",&t);
//     while(t--){
//         int n;
//         scanf("%d",&n);
//         int a[n];
//         for(int i=0; i<n; i++){
//             scanf("%d",&a[i]);
//         }
//         sorting(a,n);
//         int flag = 0;
//         for(int i=0; i<n-1; i++){
//             if(a[i]!=a[i+1]){
//                 flag=1;
//             }
//         }
//         if(flag==0){
//             printf("-1\n");
//         }
//         else if(n%2!=0){
//             printf("%d\n",(n/2)+1);
//             printf("%d\n",n/2);
//             for(int i=0; i<(n/2)+1; i++){
//                 printf("%d ",a[i]);
//             }
//             printf("\n");
            
//             for(int i=(n/2)+1; i<n; i++){
//                 printf("%d ",a[i]);
//             }
//             printf("\n");
//         }
//         else{
//             if(n==2){
//             printf("%d\n",n/2);
//             printf("%d\n",n/2);
//             for(int i=0; i<n/2; i++){
//                 printf("%d ",a[i]);
//             }
//             printf("\n");
            
//             for(int i=n/2; i<n; i++){
//                 printf("%d ",a[i]);
//             }
//             printf("\n");
//             }
//             else{
//                 printf("%d ",(n/2)+1);
//                 printf("%d\n",(n/2)-1);
//                 for(int i=0; i<(n/2)+1; i++){
//                     printf("%d ",a[i]);
//                 }
//                 printf("\n");
                
//                 for(int i=(n/2)+1; i<n; i++){
//                     printf("%d ",a[i]);
//                 }
//                 printf("\n");
//             }
//         }

//     }
// }
#include<stdio.h>

void sorting(int a[], int size){
    for(int i=0; i<size-1; i++){
        for(int j=i+1; j<size; j++){
            if(a[i]>a[j]){
                int temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0; i<n; i++){
            scanf("%d",&a[i]);
        }

        sorting(a,n);

        int all_same = 1;
        for(int i=1; i<n; i++){
            if(a[i] != a[0]){
                all_same = 0;
                break;
            }
        }

        if(all_same){
            printf("-1\n");
            continue;
        }

        int split_index = 0;
        for(int i=0; i<n; i++){
            if(a[i] != a[n-1]){
                split_index++;
            }
            else break;
        }

        printf("%d %d\n", split_index, n - split_index);

        for(int i=0; i<split_index; i++){
            printf("%d ", a[i]);
        }
        printf("\n");

        for(int i=split_index; i<n; i++){
            printf("%d ", a[i]);
        }
        printf("\n");
    }

}
