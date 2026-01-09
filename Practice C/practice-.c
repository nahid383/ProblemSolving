#include<stdio.h>


int main(){
    
          int n;
         
    while(1){
    int count[100] = {0};
        scanf("%d",&n);
        if(n==0){
            return 0;
        }
        int a[1000];
        for(int i=0; i<n; i++){
            scanf("%d",&a[i]);
            count[a[i]]++;
        }
        int idx = 0;
        for(int i=1; i<100; i++){
            while(count[i]--){
                a[idx++]=i;
            }
        }
        
        for(int i=0; i<n; i++){
           printf("%d ",a[i]);
        }
        printf("\n");
    }
}
