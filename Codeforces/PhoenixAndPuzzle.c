#include <stdio.h>
#include <math.h>

void nis1() {
    printf("NO\n");
}

void nis2() {
    printf("NO\n");
}

void nissomethingelse() {
    printf("YES\n");
}

void nahole() {
    printf("NO\n");
}

void checkingroot(int n) {
    int root1 = sqrt(n);
    int root2 = sqrt(n / 2);

    if (n == 1) {
        nis1();
    } 
    else if (n % 2 != 0) {
        nis2();
    } 
    else if (root1 * root1 == n || root2 * root2 == n / 2) {
        nissomethingelse();
    } 
    else {
        nahole();
    }
}

void solve() {
    int n;
    scanf("%d", &n);
    checkingroot(n);
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        solve();
    }
    
    return 0;
}
