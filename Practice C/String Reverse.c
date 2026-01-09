#include<stdio.h>
int main()
{
    char str[50];

    printf("Enter your string: ");
    gets(str);
    printf("Reverse string: ");
    strrev(str);
    printf("%s",str);

}
