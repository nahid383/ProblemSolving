#include <stdio.h>

int main() {
    int n, m, a, b;
    scanf("%d %d %d %d", &n, &m, &a, &b);

    int cost_1 = n * a;

    int cost_2 = ((n + m - 1) / m) * b;

    int cost_3 = (n / m) * b + (n % m) * a;

    int min_cost = cost_1;
    if (cost_2 < min_cost) 
    min_cost = cost_2;
    if (cost_3 < min_cost)
     min_cost = cost_3;

    printf("%d\n", min_cost);
    return 0;
}
