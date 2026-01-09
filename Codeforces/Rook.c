#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char rook[3];
        scanf("%s",rook);

        char col = rook[0];
        int row = rook[1]-'0';
       for (int i = 1; i <= 8; i++) {
            if (i != row)
                printf("%c%d\n", col, i);
        }

         for (char c = 'a'; c <= 'h'; c++) {
            if (c != col)
                printf("%c%d\n", c, row);
        }
    }
}