#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int programming[5000], maths[5000], physicale[5000];
    int p = 0, m = 0, ph = 0;

    for (int i = 1; i <= n; i++) {
        int skill;
        scanf("%d", &skill);
        if (skill == 1)
            programming[p++] = i;
        else if (skill == 2)
            maths[m++] = i;
        else
            physicale[ph++] = i;
    }

    int w = p;
    if (m < w) 
    w = m;
    if (ph < w) 
    w = ph;

    printf("%d\n", w);

    for (int i = 0; i < w; i++)
        printf("%d %d %d\n", programming[i], maths[i], physicale[i]);

    return 0;
}
