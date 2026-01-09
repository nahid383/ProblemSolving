#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        int flag = 0;
        for (int i = 0; i < n - 1; i++) {
            int current_gcd = gcd(a[i], a[i + 1]);
            if (current_gcd < a[i]) {
                flag = 1;
                break;
            }
        }
        if (flag == 1) {
            printf("NO\n");
        } else {
            printf("YES\n");
        }
    }
    return 0;
}