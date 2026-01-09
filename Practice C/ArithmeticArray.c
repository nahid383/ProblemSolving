#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, sum = 0, a;
        scanf("%d", &n);

        for (int i = 0; i < n; i++) {
            scanf("%d", &a);
            sum += a;
        }

        if (sum == n) {
            printf("0\n");
        } 
        else if (sum < n) {
            printf("1\n"); 
        } 
        else {
            printf("%d\n", sum - n);
        }
    }
    
    return 0;
}
