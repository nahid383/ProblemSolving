#include <stdio.h>
#include <string.h>

void solve() {
    char s[100005];
    scanf("%s", s);

    int sum = 0, two = 0, three = 0;
    
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '2') two++;
        else if (s[i] == '3') three++;
        sum = (sum + (s[i] - '0')) % 9;
    }

    for (int i = 0; i <= three; i++) {
        for (int j = 0; j <= two; j++) {
            int tsum = sum + j * 2 + i * 6;
            if (tsum % 9 == 0) {
                printf("YES\n");
                return;
            }
        }
    }

    printf("NO\n");
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}
