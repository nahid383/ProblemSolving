#include <stdio.h>

int main() {
    int A, count = 0;
    scanf("%d", &A);
    int temp = A;
    
    while (temp > 0) {
        if (temp & 1) {
            count++;
        }
        temp >>= 1;
    }
    
    int result = 1;
    while (count > 0) {
        if (count == 1) {
            result = result << 1 | 1;
            count--;
        } else {
            result = result << 1;
            count--;
        }
    }
    
    printf("%d\n", result);
    return 0;
}
