#include<stdio.h>
#include<string.h>
#include<math.h>

int main()

{
    long long n, x;

    scanf("%lld %lld",&n,&x);
    long long dis_kids=0;
    for(int i=0; i<n; i++)
    {
        
        char operations;
        long long d;
        scanf(" %c %lld", &operations, &d);
        if(operations == '+')
        x=x+d;
        else 
        {
            if(x>=d)
            x=x-d;
            else
            dis_kids++;
        }

    }
    
        printf("%lld %lld",x,dis_kids);
return 0;
}