/*
*****
*      *
*      *
*      *
*****
*/
#include<stdio.h>
int main()
{
    int n, row, col;
    printf("enter range: ");
    scanf("%d",&n);
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n; col++)
        {
            if(row==n||row==1||col==1||col==n)
                printf("@");
            else
                printf(" ");
        }
        printf("\n");
    }
}
