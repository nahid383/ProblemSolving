#include <stdio.h>
#include <string.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    char a[3000][11], b[3000][11];

   
    for (int i = 0; i < m; i++) {
        scanf("%s %s", a[i], b[i]);
    }

   
    for (int i = 0; i < n; i++) {
        char words[11];
        scanf("%s", words);

       
        for (int j = 0; j < m; j++) {
            if (strcmp(words, a[j]) == 0) {
                
                if (strlen(a[j]) <= strlen(b[j])) {
                    printf("%s", a[j]);
                } else {
                    printf("%s", b[j]);
                }
                break; 
            }
        }

        if (i < n - 1) printf(" "); 
    }

    printf("\n"); 
    return 0;
}
