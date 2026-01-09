/*
E  E E E E
D D D D
C C C
B B
A
*/

#include<stdio.h>
int main()

{
    int n, row, col;

    printf("Enter N: ");
    scanf("%d",&n);

    for(row=n; row>=1; row--)
    {
        for(col=1; col<=row; col++)
        {
            printf("*#&  ");
        }
        printf("\n");
    }
}

