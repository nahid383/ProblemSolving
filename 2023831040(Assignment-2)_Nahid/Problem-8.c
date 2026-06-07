#include <stdio.h>

int main() {
    printf("Enter the string: ");
    char str[100];
    int length = 0;

    scanf("%s", str);

    while (str[length] != '\0') {
        length++;
    }

   
    printf("Length of the string is: %d\n", length);

    return 0;
}