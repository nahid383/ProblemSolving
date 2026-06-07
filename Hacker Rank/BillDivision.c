#include <stdio.h>

int main() {
    int n, k, b;
    scanf("%d %d", &n, &k); // Read n (number of items) and k (index of item Anna didn't eat)

    int bill[n], total = 0;
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &bill[i]);
        total += bill[i]; // Sum the total bill
    }
    
    scanf("%d", &b); // Read the amount Anna paid

    int anna_share = (total - bill[k]) / 2; // Correct amount Anna should pay

    if (b == anna_share) {
        printf("Bon Appetit\n");
    } else {
        printf("%d\n", b - anna_share); // Refund amount
    }

    return 0;
}
