#include<stdio.h>
int minimum(long long n, long long m){
    if(n>m){
        return m;
    }
    else{
        return n;
    }
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long a,b;
        scanf("%lld %lld",&a,&b);

        int minimum1=minimum(a,b);

        int sum = (a+b)/4;

        int resulst = minimum(minimum1,sum);

        printf("%d\n",resulst);

        // if (a>b) {
        //     int t=a;
        //     a=b;
        //     b=t;
        // }
        // int min, max;
        // if(a>b){
        //     max=a;
        //     min=b;
        // }
        // else{
        //     min=a; 
        //     max=b;
        // }
        // int sum = a+b/4;
        
        // // if(sum>=a && sum>=b){
        // //     printf("%d\n",sum);

        // // }
        // // else{
        // //     printf("%d\n",min);
        // // }
        // if(min>sum){
        //     printf("%d\n",sum);
        // }
        // else{
        //     printf("%d\n",min);
        // }

        // if(a==0 || b==0){
        //     printf("0\n");
        // }
        
        // else if(b>=4*a){
        //     printf("%lld\n",a);
        // }
        // else if(a>=4*b){
        //     printf("%lld\n",b);
        // }
        // else if(((a+b)/4)<=b){
        //     printf("%d\n",(a+b)/4);
        // }
        // else if(((a+b)/4)<=a){
        //     printf("%d\n",(a+b)/4);
        // }
        // else if(a>=2 && b>=2){
        //     printf("%lld\n",a/2);
        
    }
}