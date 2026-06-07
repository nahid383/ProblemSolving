#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);  
         int h[n];
    for (int i = 0; i < n; i++) {
            scanf("%d", &h[i]);  
    }

    int sum = 0;
    for (int i = 0; i < k; i++) {
            sum += h[i];
    }

    int min_Sum = sum;
        int min_Index = 0;

    for (int i = 1; i <= n - k; i++) {
        sum = sum - h[i - 1] + h[i + k - 1];  
        
        if (sum < min_Sum) {  
                 min_Sum = sum;
            min_Index = i;
        }
    }

    printf("%d\n", min_Index + 1);  

    return 0;
}
