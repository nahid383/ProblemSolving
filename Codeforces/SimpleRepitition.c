#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long x;
        int k;
        scanf("%lld %d", &x, &k); 
        int flag = 1;
        if (k == 1) {
            if (x < 2)
                flag = 0;
            for (long long i = 2; i * i <= x; i++) {
                if (x % i == 0) {
                    flag = 0;
                    break;
                }
            }
            if (flag)
                printf("YES\n");
            else
                printf("NO\n");
        } else {
            if (x == 1 && k == 2)
                printf("YES\n");
            else
                printf("NO\n");
        }
    }

}
