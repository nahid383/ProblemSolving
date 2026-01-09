#include<stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        char s[n];
        scanf("%s", s);

        int count1 = 0;
        for(int i = 0; i < n - 1; i++) {
            if(s[i] == '<') {
                count1++;
            }
        }

        int count2 = count1 + 2;
            count1 = count1 + 1;

        printf("%d ", count1);

        for(int i = 0; i < n - 1; i++) {
            if(s[i] == '<') {
                count1--;
                printf("%d ", count1);
            } else {
                printf("%d ", count2);
                count2++;
            }
        }

        printf("\n");
    }

}
//from the river to teh sea, palestine will be free