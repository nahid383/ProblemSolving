#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char string[101];
        scanf("%s",string);
        int length = strlen(string);
        printf("%c%c",string[0],string[1]);
        for(int i=3; i<length; i=i+2)
        {
            printf("%c",string[i]);
        }
        printf("\n");
    }
    return 0;
}