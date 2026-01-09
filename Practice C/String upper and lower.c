#include<stdio.h>
int main()
{
    char string[]="Bangladesh";
    printf("%s \n",string);

    strupr(string);

    printf("\n%s",string);

    strlwr(string);

    printf("\n\n%s",string);
}
