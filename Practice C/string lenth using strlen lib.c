#include<stdio.h>
int main()
{
    char n[40];
    printf("Enter your about: ");
    gets(n);

    int length;
    length = strlen(n);

    printf("Length = %d",length);
}
