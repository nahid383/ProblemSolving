#include<stdio.h>
#include<string.h>
int main()
{
    char given[]= "qwertyuiopasdfghjkl;zxcvbnm,./";
    int length= strlen(given);
    char ch;
    scanf("%c",&ch);
     char input[101];
    scanf("%s",input);
    int length2=strlen(input);
    int shift;
    if(ch=='R')
        shift=-1;
    else
        shift=1;
    for(int i=0; i<length2; i++)
    {
        for(int j=0; j<length; j++)
        {
            if(input[i]==given[j])
            {
                printf("%c",given[j+shift]);
                break;
            }
        }
    }
    printf("\n");
    return 0;
    
}