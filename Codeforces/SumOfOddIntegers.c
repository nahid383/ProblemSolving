#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,k;
        scanf("%lld %lld",&n,&k);
        if(n>=k*k && n%2==k%2){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
}