#include <stdio.h>
#include <string.h>

int main() {
    int n, totalface = 0;
    scanf("%d", &n);

    char s[15]; // Temporary buffer to store each polyhedron name

    for (int i = 0; i < n; i++) {
        scanf("%s", s); // Read each polyhedron name into the buffer

        if (strcmp(s, "Tetrahedron") == 0) {
            totalface += 4;
        } else if (strcmp(s, "Cube") == 0) {
            totalface += 6;
        } else if (strcmp(s, "Octahedron") == 0) {
            totalface += 8;
        } else if (strcmp(s, "Dodecahedron") == 0) {
            totalface += 12;
        } else if (strcmp(s, "Icosahedron") == 0) {
            totalface += 20;
        }
    }

    printf("%d\n", totalface);

    return 0;
}
