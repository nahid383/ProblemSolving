#include <stdio.h>
#include <string.h>

int main() {
    char s[1000], rev[1000];
    
    printf("Enter a string: ");
    scanf("%s", s);

   
    strcpy(rev, s); 
    strrev(rev);     

    int len = strlen(s);
    int isSadindrome = 1;

    for(int i = 0; i < len; i++) {
        if(s[i] == rev[i]) {
            isSadindrome = 0;
            break;
        }
    }

    if(isSadindrome)
        printf("YES, it is a Sadindrome.\n");
    else
        printf("NO, it is NOT a Sadindrome.\n");

    return 0;
}
