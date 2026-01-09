#include<stdio.h>

int main(){
    long long n,m;
    scanf("%lld %lld",&n,&m);
    if(m==1){
        long long maxMin = n*(n-1)/2;
        printf("%lld %lld\n",maxMin,maxMin);

    }
    else if(m==n-1){
        printf("1 1\n");
    }
    else{
        long long x= n-m+1;
        long long max = x*(x-1)/2;
        if(n%m==0){
        long long y = n/m;
        long long min = y*(y-1)/2;
        printf("%lld %lld\n",min*m,max);
        }
        else if(n%m!=0){
        long long y = (n/m)+1;
        long long min = y*(y-1)/2;
        printf("%lld %lld\n",n-m,max);
        }
 
      
    }
}