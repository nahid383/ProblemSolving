#include<stdio.h>
#include<string.h>

int main() {
    int t; // Number of test cases
    scanf("%d", &t);

    for (int i = 1; i <= t; i++) {
        int n; // Length of the string
        scanf("%d", &n);

        char s[n + 1]; // String input (extra space for null terminator)
        scanf("%s", s);

        // Initialize counters for each character in "Timur"
        int T = 0, I = 0, M = 0, U = 0, R = 0;

        // Count occurrences of each character
        for (int j = 0; j < n; j++) {
            if (s[j] == 'T')
                T++;
            else if (s[j] == 'i')
                I++;
            else if (s[j] == 'm')
                M++;
            else if (s[j] == 'u')
                U++;
            else if (s[j] == 'r')
                R++;
        }

        // Check if it matches the exact characters of "Timur"
        if (n == 5 && T == 1 && I == 1 && M == 1 && U == 1 && R == 1) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }

    return 0;
}
