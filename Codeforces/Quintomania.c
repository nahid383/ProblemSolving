#include <stdio.h>
#include <stdlib.h>

void checkMelodies(int t) {
    while (t--) {
        int n;
        scanf("%d", &n); // Read the number of notes

        int notes[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &notes[i]); // Read the notes
        }

        // Check intervals between adjacent notes
        int isPerfect = 1; // Assume the melody is perfect
        for (int i = 1; i < n; i++) {
            int interval = abs(notes[i] - notes[i - 1]);
            if (interval != 5 && interval != 7) {
                isPerfect = 0; // Not perfect if the interval is not 5 or 7
                break;
            }
        }

        // Output the result
        if (isPerfect) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
}

int main() {
    int t;
    scanf("%d", &t); // Read the number of melodies
    checkMelodies(t);
    return 0;
}
