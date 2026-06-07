#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    int i = 1;
    while (T--) {
        int P1, P2, P3;
        scanf("%d %d %d", &P1, &P2, &P3);

        if ((P1 > P2 && P1 < P3) || (P1 > P3 && P1 < P2)) {
            printf("Case %d: %d\n", i, P1);
        }
        else if ((P2 > P1 && P2 < P3) || (P2 > P3 && P2 < P1)) {
            printf("Case %d: %d\n", i, P2);
        }
        else {
            printf("Case %d: %d\n", i, P3);
        }
        i++;
    }
    return 0;
}
