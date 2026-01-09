#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n];
        int sum = 0;
        for(int i=0; i<n; i++){
            scanf("%d",&a[i]);
            // sum = sum+a[i];
        }

        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if(a[i]>a[j]){
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
        int avg;
        int count=0;
        for(int i=0; i<n; i++){
            // printf("%d ",a[i]);
            sum = sum+a[i];
            avg = sum/(i+1);
            if(avg<a[i]){
                count++;
            }
            else  if(avg>a[i]){
                break;
            }
        }

        int same = a[0];
        int flag = 1;
        int index;
        for(int i=1; i<n; i++){
            if(a[i]!=a[0]){
                flag=0;
                // index = i;
                break;
            }
        }
        if(flag){
            printf("0\n");
            continue;
        }
        // int avg = sum/n;
        // int count = 0;
        // for(int i=0; i<n; i++){
        //     if(a[i]>avg){
        //         count++;
        //     }
        // }
        // // if(flag==0 && index<=n-1){
        // //     printf("0\n");
        // // }
        // // else{
        // // }
        // printf("%d\n",count);
        printf("%d\n",count);
    }
}