#include<stdio.h>
#include<string.h>
void touppercase(char string[], int length)
{
    for(int i=0; i<length; i++)
    {
        if(string[i]>='a' && string[i] <= 'z')
        { 
            string[i]=string[i]-32;
        }
    }
}
int main()
{
    char string[101];
    scanf("%s",string);
    int length = strlen(string);

    touppercase(string,length);

    printf("%s",string);
}