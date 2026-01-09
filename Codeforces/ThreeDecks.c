#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        long long a,b,c;
        scanf("%lld %lld %lld",&a,&b,&c);

        long long num = 2*c-a-b;
        if (num %3!=0) {
            printf("NO\n");
            continue;
        }

        long long x = num / 3;
        if (x<1 || x>c) {
            printf("NO\n");
            continue;
        }

        long long y = c-x-a;
        if (y<0 || y>x) {
            printf("NO\n");
            continue;
        }

        printf("YES\n");
    }

}
