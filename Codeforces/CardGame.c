#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);

        int games = 0;
        if ((a >= c && b > d) || (a > c && b >= d)) 
        games++;
        if ((a >= d && b > c) || (a > d && b >= c)) 
        games++;

        printf("%d\n", games * 2);
    }

    
}
