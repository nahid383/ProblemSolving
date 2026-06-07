#include<stdio.h>
#include<string.h>
int main()
{
    printf("Enter a string: ");
    char string[10001];
    gets(string);
    int length= strlen(string);
    int flag=0;
    for(int i=0; i<length; i++)
    {
        if(string[i]!=string[length-1-i])
        flag=1;
    }
    if(flag==1)
    printf("Not a palindrome\n");
    else
    printf("Palindrome");
}