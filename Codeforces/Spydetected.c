#include <stdio.h>

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

        if (a[0] != a[1] && a[0] != a[2]) {
            printf("1\n");
        } else {
            int common = (a[0] == a[1]) ? a[0] : a[2];
            for (int i = 0; i < n; i++) {
                if (a[i] != common) {
                    printf("%d\n", i + 1);
                    break;
                }
            }
        }
    }

    return 0;
}
