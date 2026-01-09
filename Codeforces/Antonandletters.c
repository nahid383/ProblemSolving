#include <stdio.h>
#include <string.h>

int main() {
    int count = 0;
    char string1[1001];
    int frequency[26] = {0};

    scanf("%[^\n]s", string1); 
    int length = strlen(string1);
    for (int i = 0; i < length; i++) {
        if (string1[i] == '{' || string1[i] == ',' || string1[i] == ' ' || string1[i] == '}') {
            continue;
        }
        if (string1[i] >= 'a' && string1[i] <= 'z') {
            int index = string1[i] - 'a';
            if (frequency[index] == 0) {
                frequency[index] = 1;
                count++;
            }
        }
    }

    printf("%d", count);
    return 0;
}
