#include<stdio.h>
int main()
{
    int n, row, col;
    printf("Enter range N: ");
    scanf("%d",&n);

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n-row; col++)
            printf(" ");
        for(col=1; col<=n*2-1; col++)
        {
            if(row==n||row==col||row==col)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
