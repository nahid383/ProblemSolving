#include <stdio.h>

void sortAscending(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int notes[] = {500, 100, 50, 10, 5, 1};
    int collected[10000], count = 0;

    for (int i = 0; i < 6; i++) {
        while (n >= notes[i]) {
            collected[count++] = notes[i];
            n -= notes[i];
        }
    }

    sortAscending(collected, count);

    for (int i = 0; i < count; i++) {
        printf("%d ", collected[i]);
    }
    printf("\n");

    return 0;
}
