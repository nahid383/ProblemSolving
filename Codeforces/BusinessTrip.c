#include <stdio.h>

void sorting(int a[]) {
    for (int i = 0; i < 12; i++) {
        for (int j = i + 1; j < 12; j++) {
            if (a[i] < a[j]) { 
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}

int main() {
    int k;
    scanf("%d", &k);

    int a[12];
    for (int i = 0; i < 12; i++) {
        scanf("%d", &a[i]); 
    }

    sorting(a); 

    int nahidsum = 0, nahidcount = 0;
    
    for (int nahid = 0; nahid < 12; nahid++) {
        if (nahidsum >= k) {
            break;
        }
        nahidsum += a[nahid];
        nahidcount++;
    }

    if (nahidsum < k) {
        printf("-1\n");
    } else {
        printf("%d\n", nahidcount);
    }

    return 0;
}
