#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,k;
        scanf("%d %d",&n,&k);
        // if(n%k==0){
        //     printf("YES\n");
        //     for(int i=0; i<k; i++){
        //         printf("%d ",n/k);
        //     }
        // }
        // else{
        //     int div = (n/k)+1;
        //     if(div%2==0){
        //         int rem = n-div*(k-1);
        //         if(rem<=0){
        //             printf("NO\n");
        //         }
        //         else if(rem%2==0){
        //             printf("YES\n");
        //             for(int i=1; i<k; i++){
        //                 printf("%d ",div);

        //             }
        //             printf("%d ",rem);
        //         }
        //         else{
        //             if((n-k-1)%2!=0){
        //                 printf("YES\n");
        //                 printf("%d ",n-k+1);
        //                 for(int i=1; i<k; i++){
        //                     printf("1 ");
        //                 }
        //             }
        //             else{
        //             printf("NO\n");
        //             }
        //         }

        //     }

        //     else if(div%2!=0){
        //         int rem = n-div*(k-1);
        //         if(rem<=0){
        //             printf("NO\n");
        //         }
        //         else if(rem%2!=0){
        //             printf("YES\n");
        //             for(int i=1; i<k; i++){
        //                 printf("%d ",div);

        //             }
        //             printf("%d ",rem);
        //         }
        //         else{
        //             printf("NO\n");
        //         }
        //     }

        //     else{
        //         printf("NO\n");

        //     }
        
        // }
        if (n >= k && (n % 2 == k % 2)) {
            printf("YES\n");
            for (int i = 1; i < k; i++) {
                printf("1 ");
            }
            printf("%d\n", n - (k - 1));
        }
        else if (n >= 2 * k && n % 2 == 0) {
            printf("YES\n");
            for (int i = 1; i < k; i++) {
                printf("2 ");
            }
            printf("%d\n", n - 2 * (k - 1));
        }
        else {
            printf("NO\n");
        }
        printf("\n");
    }
    
}