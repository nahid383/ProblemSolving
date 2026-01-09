#include <stdio.h>
#include <math.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char s[5];
        scanf("%s", s);

        int n = (s[0] - '0') * 1000 + (s[1] - '0') * 100 +
                (s[2] - '0') * 10 + (s[3] - '0');

        int r = (int)sqrt(n);
        if (r * r != n) {
            printf("-1\n");
        } else {
            printf("0 %d\n", r);
        }
    }
    return 0;
}
