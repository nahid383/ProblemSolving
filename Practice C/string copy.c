#include<stdio.h>
int main()
{
    char source[40];
    char target[30];
    printf("Enter your character: ");
    gets(source);

    strcpy(target, source);

    printf("Target string is: %s",target);
}
