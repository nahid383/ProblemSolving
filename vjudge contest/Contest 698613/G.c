#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        char s[1001];
        scanf("%s", s);
        
        int len = strlen(s);
        int count = 0, found = 0;

        for (int i = 0; i < len; i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                count++;
                if (count > 2) {
                    found = 1;
                    break;
                }
            } else {
                count = 0;
            }
        }

        if (found)
            printf("Happy\n");
        else
            printf("Sad\n");
    }

    return 0;
}
