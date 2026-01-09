#include <stdio.h>
#include <string.h>

#define TARGET "01032025"

void solve() {
    int n;
    scanf("%d", &n);
    
    int digits[n];
    int freq[10] = {0}, count[10] = {0};
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &digits[i]);
    }
    
    for (int i = 0; TARGET[i] != '\0'; i++) {
        freq[TARGET[i] - '0']++;
    }
    
    for (int i = 0; i < n; i++) {
        count[digits[i]]++;
        
        int can_form = 1;
        for (int j = 0; j < 10; j++) {
            if (count[j] < freq[j]) {
                can_form = 0;
                break;
            }
        }
        
        if (can_form) {
            printf("%d\n", i + 1);
            return;
        }
    }
    
    printf("0\n");
}

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        solve();
    }
    
    return 0;
}
