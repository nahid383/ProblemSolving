#include<stdio.h>
int main()
{
    long long n,m;
    scanf("%lld %lld",&n,&m);
    long long a[m];
    for(long long i=0; i<m; i++)
    {
        scanf("%lld",&a[i]);

    }
    long long time = 0;
    long long current_house=1;
    for(long long i=0; i<m; i++)
    {
        if(a[i]>=current_house)
        {
            time=time+(a[i]-current_house);

        }
        else 
        {
            time = time + (n-current_house+a[i]);
        }
        current_house=a[i];
    }                      
    printf("%lld",time);   
}