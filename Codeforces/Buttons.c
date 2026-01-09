#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);

        if(a+c < b+c)
        printf("Second\n");
        else if((a+c == b+c) && c%2==0)
        printf("Second\n");
        else
        printf("First\n");
    }
}