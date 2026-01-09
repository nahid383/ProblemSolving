/*
1
2  2
3  3  3
4  4  4  4
*/
#include<stdio.h>
int main()
{
    int n, row, collum;
    printf("Enter N: ");
    scanf("%d",&n);

    for(row=1; row<=n; row++)
    {
        for(collum=1; collum<=row; collum++)
        {
            printf("%d   ",row);
        }
        printf("\n");
    }
}
