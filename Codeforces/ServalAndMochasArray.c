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
        
        int v[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &v[i]);
        }

        int t = 1;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (gcd(v[i], v[j]) <= 2) {
                    t = 0;
                    break;
                }
            }
            if (t == 0) break;
        }

        if (t) 
            printf("No\n");
        else 
            printf("Yes\n");
    }

    return 0;
}
