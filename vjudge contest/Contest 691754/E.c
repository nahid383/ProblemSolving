#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    long long a[n];
    for (int i = 0; i < n; i++) {
        scanf("%lld", &a[i]); 
    }

    long long max_even = -1; 

   
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) { 
            long long sum = a[i] + a[j];
            if (sum % 2 == 0 && sum > max_even) {
                max_even = sum; 
            }
        }
    }

    printf("%lld\n", max_even); 
    return 0;
}
