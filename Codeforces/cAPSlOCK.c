#include<stdio.h>
#include<string.h>
int main()
{
    char string[101];
    scanf("%s",string);
    int length=strlen(string);
    int lower = 0;
    int upper=0;
    for(int i=1; i<length; i++)
    {
        if(islower(string[i]))
        {
            lower++;
        }
    }
    for(int i=0; i<length; i++)
    {
        if(isupper(string[i]))
        upper++;
    }
    if(upper==length)
    {
        for(int i=0; i<length; i++)
        {
            string[i]=tolower(string[i]);
        }
        printf("%s",string);
        return 0;
    }
    if(islower(string[0]) && lower==0)
    {
        string[0]= toupper(string[0]);
        for(int i=1; i<length; i++)
        {
            string[i]=tolower(string[i]);
        }
        printf("%s",string);
        return 0;
    }
    printf("%s",string);
    return 0;
    


   
}