#include<stdio.h>
int main()
{
    char string1[100];
    char string2[100];
    printf("Enter your 1st character: ");
    gets(string1);
    printf("Enter your 2nd character: ");
    gets(string2);

    strcat(string1,string2);

    printf("Target string is: %s",string1);
}

