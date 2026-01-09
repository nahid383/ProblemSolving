#include<stdio.h>
#include<string.h>
int main()
{
    char string[101];
    scanf("%s",string);
    int len = strlen(string);

    for(int i=0; i<len; i++)
    {
        if(string[i]=='H' || string[i]=='Q' || string[i]=='9')
       { printf("Yes\n");
        return 0;}
    }
    printf("no\n");
    return 0;
}