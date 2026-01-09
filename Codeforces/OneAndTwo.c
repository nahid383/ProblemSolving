#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int n;
        scanf("%d", &n);
        
        int v[n], count_2 = 0;
        int freq[100001] = {0}; 

        for (int i = 0; i < n; i++) {
            scanf("%d", &v[i]);
            freq[v[i]]++;
        }

        count_2 = freq[2];

        if (count_2 != 0) {
            if (count_2 % 2 == 0) {
                int x = count_2 / 2, cnt = 0, pos = 0;
                
                for (int i = 0; i < n; i++) {
                    if (cnt == x) break;
                    if (v[i] == 2) cnt++;
                    pos++;
                }
                
                printf("%d\n", pos);
            } else {
                printf("-1\n");
            }
        } else {
            printf("1\n");
        }
    }

    return 0;
}
