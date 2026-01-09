#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long a,b;
        scanf("%lld %lld",&a,&b);
        if(b==1){
            printf("NO\n");
        }
        else {
            printf("YES\n");
            printf("%lld %lld %lld\n", a, (a * b * 3) - a, a * b * 3);
        }
    }
}