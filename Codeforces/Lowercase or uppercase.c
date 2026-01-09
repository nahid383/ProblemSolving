#include<stdio.h>
int main()
{
    char character;
    scanf("%c",&character);
    if(character>='a' && character<='z')
        printf("This is a lowercase letter.");
    else if(character>='A' && character<='Z')
        printf("This is a Uppercase letter.");
    else
        printf("This is not any letter.");

}
