#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m,k;
        scanf("%d %d %d",&n,&m,&k);
       int i=n;
       while(i!=m){
        printf("%d ",i);
        i--;
       }
        for(int i=1; i<=m; i++){
            printf("%d ",i);
        }
    printf("\n");
    }
}