#include <stdio.h>

long long maxFinalElement(int* a, int n) {
    long long sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += a[i]; 
    }
    return sum - (n - 1); 
}

int main() {
    int t;
    scanf("%d", &t); 
    while (t--) {
        int n;
        scanf("%d", &n); 
        int a[n];
        for (int i = 0; i < n; ++i) {
            scanf("%d", &a[i]); 
        }
        printf("%lld\n", maxFinalElement(a, n)); 
    }
    return 0;
}
