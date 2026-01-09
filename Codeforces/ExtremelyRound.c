#include <stdio.h>

void solution() {
    int n;
    scanf("%d", &n);
    
    if (n < 10) {
        printf("%d\n", n);
        return;
    }
    
    int digit = 0;
    int temp = n;
    
    while (n != 0) {
        n /= 10;
        digit++;
    }
    
    n = temp;
    
    int x = 1;
    for (int i = 0; i < digit - 1; i++) {
        x *= 10;
    }
    
    printf("%d\n", 9 * (digit - 1) + (n / x));
}

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) solution();
    
    return 0;
}
