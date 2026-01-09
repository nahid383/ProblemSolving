#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,x;
        scanf("%d %d",&n,&x);

        int a[n];
        int flag = 0;
        for(int i=0; i<n; i++){
            scanf("%d",&a[i]);
            flag = flag + a[i];
        }
        if(flag==n*x){
            printf("YES\n");
       
    }
    else{
        printf("nO\n");
    }
}