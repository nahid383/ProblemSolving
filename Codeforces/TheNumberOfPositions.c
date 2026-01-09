#include <stdio.h>

int main() {
    int n, a, b, result;
    scanf("%d %d %d", &n, &a, &b);

    result = n - a;
    if (result > b + 1) result = b + 1;

    printf("%d\n", result);
    return 0;
}
