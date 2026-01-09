#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    
    int f[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &f[i]);
    }
    

    for (int i = 0; i < m - 1; i++) {
        for (int j = 0; j < m - i - 1; j++) {
            if (f[j] > f[j + 1]) {
                int temp = f[j];
                f[j] = f[j + 1];
                f[j + 1] = temp;
            }
        }
    }
    
    int min_diff = 1001; 
    
    for (int i = 0; i <= m - n; i++) {
        int diff = f[i + n - 1] - f[i];
        if (diff < min_diff) {
            min_diff = diff;
        }
    }
    
    printf("%d\n", min_diff);
    return 0;
}
