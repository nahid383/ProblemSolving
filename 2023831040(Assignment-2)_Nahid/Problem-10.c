#include<stdio.h>
#include<string.h>
int main()
{
    printf("Enter the string: ");
    char string[10001];
    gets(string);
    int length = strlen(string);
    for(int i=0; i<length; i++)
    {
        if(string[i]!=' ')
        printf("%c",string[i]);

    }
}
