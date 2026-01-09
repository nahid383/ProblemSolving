#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        long long a;
        scanf("%lld",&a);
        int count = 0;
        for(long long j=2; j<a; j++)
        {
            if(a%j==0)
            count++;
            if(count>1)
            break;
        }
        if(count==1)
        printf("YES\n");
        else
        printf("NO\n");
    }
}
