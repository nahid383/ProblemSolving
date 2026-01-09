#include <stdio.h>

int main() {
    long long t, n, k;
    scanf("%lld", &t);

    while (t--) {
        scanf("%lld %lld", &n, &k);

        if ((n & 1) == 0) 
            printf("YES\n");
        else {
            if ((k & 1) == 1) 
                printf("YES\n");
            else 
                printf("NO\n");
        }
    }
    
    return 0;
}
