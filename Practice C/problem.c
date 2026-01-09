#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t); // Number of test cases

    while (t--) {
        int n;
        scanf("%d", &n); // Read length of array

        int a[n], freq[n + 1]; 
        int i, j, distinct = 0, original_score, best_l = 0, best_r = 0, best_score, min_length = n;

        // Initialize frequency array
        for (i = 0; i <= n; i++) {
            freq[i] = 0;
        }

        // Read array and calculate distinct elements
        for (i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            if (freq[a[i]] == 0) {
                distinct++; // Count distinct elements
            }
            freq[a[i]]++;
        }

        // Calculate initial score
        original_score = n - distinct;
        best_score = original_score;

        // Try removing every possible subarray
        for (i = 0; i < n; i++) {
            for (j = i; j < n; j++) {
                int temp[n], temp_size = 0, temp_freq[n + 1], temp_distinct = 0;

                // Reset temporary frequency array
                for (int k = 0; k <= n; k++) {
                    temp_freq[k] = 0;
                }

                // Construct new array after removing a[i..j]
                for (int k = 0; k < i; k++) {
                    temp[temp_size] = a[k];
                    if (temp_freq[a[k]] == 0) {
                        temp_distinct++;
                    }
                    temp_freq[a[k]]++;
                    temp_size++;
                }
                for (int k = j + 1; k < n; k++) {
                    temp[temp_size] = a[k];
                    if (temp_freq[a[k]] == 0) {
                        temp_distinct++;
                    }
                    temp_freq[a[k]]++;
                    temp_size++;
                }

                int new_score = temp_size - temp_distinct;

                // Update best choice
                if (new_score > best_score || (new_score == best_score && temp_size < min_length)) {
                    best_score = new_score;
                    best_l = i;
                    best_r = j;
                    min_length = temp_size;
                }
            }
        }

        // Output the result
        if (best_score == original_score) {
            printf("0\n"); // No need to remove anything
        } else {
            printf("%d %d\n", best_l + 1, best_r + 1); // Convert to 1-based index
        }
    }

    return 0;
}
