// small letter or capital letter?
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any letter: ");
    scanf("%c",&ch);

    if(ch>='a' && ch<='z')
        printf("Small letter");
    else if(ch>='A'&&ch<='Z')
        printf("Capital letter");
    else
        printf("Not any letter");
    return 0;

}
