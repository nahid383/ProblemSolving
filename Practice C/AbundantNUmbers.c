#include <stdio.h>

int main() {
    int n, m, i, j, sum;

    printf("Enter two numbers (n and m): ");
    scanf("%d %d", &n, &m);

    if (n > m) {
        int temp = n;
        n = m;
        m = temp;
    }

    printf("Abundant numbers between %d and %d are:\n", n, m);

    for(i = n; i <= m; i++) {
        sum = 0;
        for(j = 1; j <= i/2; j++) {
            if(i % j == 0) {
                sum += j;
            }
        }
        if(sum > i) {
            printf("%d\n", i);
        }
    }

    return 0;
}
