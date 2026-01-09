#include <stdio.h>

int main() {
    for (char first = 'A'; first <= 'X'; first++) {
        for (char second = first + 1; second <= 'Y'; second++) {
            for (char third = second + 1; third <= 'Z'; third++) {
                printf("%c%c%c ", first, second, third);
            }
        }
        printf("\n");
    }

}