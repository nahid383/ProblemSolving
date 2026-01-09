#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int a1, a2, a4, a5;
        scanf("%d %d %d %d", &a1, &a2, &a4, &a5);


        int maxFibonacciness = 0;

        int a3 = a1 + a2;
        int count = 0;
        if (a3 == a1 + a2) count++;
        if (a4 == a2 + a3) count++;
        if (a5 == a3 + a4) count++;
        maxFibonacciness = (count > maxFibonacciness) ? count : maxFibonacciness;

        a3 = a4 - a2;
        count = 0;
        if (a3 == a1 + a2) count++;
        if (a4 == a2 + a3) count++;
        if (a5 == a3 + a4) count++;
        maxFibonacciness = (count > maxFibonacciness) ? count : maxFibonacciness;


        a3 = a5 - a4;
        count = 0;
        if (a3 == a1 + a2) count++;
        if (a4 == a2 + a3) count++;
        if (a5 == a3 + a4) count++;
        maxFibonacciness = (count > maxFibonacciness) ? count : maxFibonacciness;


        printf("%d\n", maxFibonacciness);
    }

    return 0;
}

