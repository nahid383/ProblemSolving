#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n],flag=0;
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        for(int i=1;i<n;i++){
            if(a[i]!=a[0]){
                flag=1;
                break;
            }
        }
        if(flag==0){
            printf("NO\n");
        }else{
            printf("YES\n");
            for(int i=0,j=n-1;i<j;i++,j--){
                printf("%d %d ",a[i],a[j]);
            }
            if(n%2==1)printf("%d",a[n/2]);
            printf("\n");
        }
    }
}
