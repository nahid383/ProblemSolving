#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int a[n], b[n];
        int min_a = 1000000000, min_b = 1000000000;


        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            if (a[i] < min_a) min_a = a[i];
        }


        for (int i = 0; i < n; i++) {
            scanf("%d", &b[i]);
            if (b[i] < min_b) min_b = b[i];
        }

        long long moves = 0;


        for (int i = 0; i < n; i++) {
                if(a[i]>min_a  &&  b[i]>min_b)
                moves=moves+1;
        else
{
    moves += a[i] - min_a;
            moves += b[i] - min_b;
}

        }


        printf("%lld\n", moves);
    }

    return 0;
}
