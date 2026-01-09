
#include<stdio.h>
int main()
{
    char n[40];
    printf("Enter your about: ");
    gets(n);

    int i=0, length=0;
while(n[i]!='\0')
{
    i++;
    length++;
}

    printf("Length = %d",length);
}
