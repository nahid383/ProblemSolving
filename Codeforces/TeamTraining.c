#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)b - *(int *)a); // Sort in descending order
}

void solve() {
    int n, x;
    scanf("%d %d", &n, &x);
    
    int skills[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &skills[i]);
    }

    qsort(skills, n, sizeof(int), compare); 

    int teams = 0;
    int members = 0;
    int min_skill = 1000000000; 

    for (int i = 0; i < n; i++) {
        members++;
        if (skills[i] < min_skill) {
            min_skill = skills[i]; 
        }

        if (members * min_skill >= x) { 
            teams++;
            members = 0;
            min_skill = 1000000000; 
        }
    }

    printf("%d\n", teams);
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}
