#include<stdio.h>

void isable(int y)
{
    if(y<=7)
    printf("Yes\n");
    else
    printf("No\n");

    return;
}
int main()
{
    int t;
    scanf("%d",&t);
        while(t--)
    {
        int X;
        scanf("%d",&X);
        isable(X);
    }

    return 0;
}