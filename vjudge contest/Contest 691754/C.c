#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char string1[101], string2[101];
    

    scanf("%s", string1);
    scanf("%s", string2);
   
    for (int i = 0; string1[i]; i++) {
        string1[i] = tolower(string1[i]);
    }
    for (int i = 0; string2[i]; i++) {
        string2[i] = tolower(string2[i]);
    }
    

    int result = strcmp(string1, string2);
    
    if (result < 0)
        printf("-1\n");
    else if (result > 0)
        printf("1\n");
    else
        printf("0\n");

    return 0;
}
