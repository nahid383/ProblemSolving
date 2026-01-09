#include<stdio.h>
int main()
{
    int s;
    scanf("%d",&s);
    if(s>2)
    {
        if(s%2==0)
        printf("YES\n");
        else
        printf("NO\n");
    }
    else
    printf("NO\n");
    
}