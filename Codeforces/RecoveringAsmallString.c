#include <stdio.h>

int main() {
    int t, n;
    scanf("%d", &t); 

    while (t--) {
        scanf("%d", &n); 

      
        for (int i = 1; i <= 26; i++) { 
            for (int j = i; j <= 26; j++) { 
                int k = n - i - j; 

                if (k >= j && k <= 26) { 
                    printf("%c%c%c\n", 'a' + i - 1, 'a' + j - 1, 'a' + k - 1);
                    goto next_case; 
                }
            }
        }
        
        next_case:; 
    }

    return 0;
}
