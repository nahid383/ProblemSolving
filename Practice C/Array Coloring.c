
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);  // Number of test cases

    while (t--) {
        int n;
        scanf("%d", &n);  // Length of the array

        int a[50], even = 0, odd = 0;

        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);  // Read array elements
            if (a[i] % 2 == 0) {
                even++;  // Count even numbers
            } else {
                odd++;  // Count odd numbers
            }
        }

        // Check if both even and odd numbers exist
        if (even > 1 || odd > 1) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
