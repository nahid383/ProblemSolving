#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int n, x, Xor = 0;
        scanf("%d", &n);
        
        for (int i = 0; i < n; i++) {
            scanf("%d", &x);
            Xor ^= x;
        }

        if (n % 2 == 0) {
            if (Xor != 0) 
                printf("-1\n");
            else 
                printf("0\n");
        } else {
            printf("%d\n", Xor);
        }
    }

    return 0;
}
