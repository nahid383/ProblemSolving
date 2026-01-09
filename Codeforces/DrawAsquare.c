#include <stdio.h>

int isSquare(int l, int r, int d, int u) {
   
    if (l != r || d != u) return 0; 
   
    return (l == d); 
}

int main() {
    int t;
    scanf("%d", &t);  

    while (t--) {
        int l, r, d, u;
        scanf("%d %d %d %d", &l, &r, &d, &u); 
        
        if (isSquare(l, r, d, u)) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }

    return 0;
}
