#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int g[n*n];
        for(int i=0; i<n*n; i++){
                scanf("%d",&g[i]);

        }
        for(int i=1; i<=2*n; i++){
            int flag = 0;
            for(int j=0; j<n*n; j++){
                if(i==g[j]){
                    flag=1;
                }
            }
            if(flag==0){
                printf("%d ",i);
            }
        }
        for(int i=0; i<n; i++){
            printf("%d ",g[i]);
        }
        for(int i=n+1; i<n*n; i++){
            if((i+1)%n==0){
                printf("%d ",g[i]);
            }
        }
        printf("\n");
       
        
    }
}