#include <stdio.h>
#include <limits.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int min_val = INT_MAX;
        int max_val = INT_MIN;
        for (int i = 0; i < n; ++i) {
            int current_a;
            scanf("%d", &current_a);
            if (current_a < min_val) {
                min_val = current_a;
            }
            if (current_a > max_val) {
                max_val = current_a;
            }
        }
        int max_pleasure = max_val - min_val;
        printf("%d\n", max_pleasure);
    }
    return 0;
}