#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int male, female;
        scanf("%d %d", &male, &female);

        int cng = (female + 2) / 3;
        int seatsUsedByFemale = (female < cng * 3) ? female : cng * 3;
        int maleSeatsAvailable = cng * 5 - seatsUsedByFemale;
        int maleLeft = male - maleSeatsAvailable;

        if (maleLeft > 0) {
            cng += (maleLeft + 4) / 5;
        }

        printf("%d\n", cng);
    }

    return 0;
}
