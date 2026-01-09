#include <stdio.h>
int main()
{
    int n, k, i, count = 0;
    scanf("%d %d", &n, &k);
    int totaltime = 240;
    int existingtime = totaltime - k;

    for (i = 1; i <= n; i++) {
        if (5 * i > existingtime) {
            break;
        }
        existingtime -= 5 * i;
        count++;
    }

    printf("%d", count);
    return 0;
}
