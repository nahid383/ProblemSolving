#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        char s[100001];

        scanf("%d", &n);
        scanf("%s", s);

        int first_B = -1, last_B = -1;


        for (int i = 0; i < n; i++) {
            if (s[i] == 'B') {
                if (first_B == -1) first_B = i;
                last_B = i;
            }
        }
        int min_length = last_B - first_B + 1;
        printf("%d\n", min_length);
    }

    return 0;
}
