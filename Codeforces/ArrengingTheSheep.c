#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        char a[n];

         scanf("%s",a);

        int count = 0;
        for(int i=0; i<n; i++){
            if(a[i]=='*'){
                count++;
            }
        }

        if(count==0 || count==1 || count==n){
            printf("0\n");
        }


    }
}