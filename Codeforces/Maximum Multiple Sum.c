#include <stdio.h>

int main() {
    int t, n;


    scanf("%d", &t);


    while (t--) {

        scanf("%d", &n);

        int max_sum = 0;
        int optimal_x = 0;


        for (int x = 2; x <= n; x++) {

            int k = n / x;
            int sum = x * (k * (k + 1)) / 2;


            if (sum > max_sum) {
                max_sum = sum;
                optimal_x = x;
            }
        }


        printf("%d\n", optimal_x);
    }

    return 0;
}
