#include<stdio.h>
int main()
{
    int t;
     char c;
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
        scanf(" %c",&c);
        if(c == 'c' || c == 'o' || c=='d' || c == 'e' || c == 'f' || c == 'r' || c == 'c' || c == 's')
            printf("yes\n");
        else
            printf("No\n");
    }
    return 0;
}
