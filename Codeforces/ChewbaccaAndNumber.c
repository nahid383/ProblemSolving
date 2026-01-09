
#include<stdio.h>
#include<string.h>
int main()
{
    char x[20];
    scanf("%s",x);
    int length= strlen(x);
    if(x[0]!='9' && x[0]>'4')
    {
        x[0]='9'-x[0]+'0';

    }
    for(int i=1; i<length; i++)
    {
        if(x[i]>'4')
        {
            x[i]='9'-x[i]+'0';
        }
    }
    printf("%s",x);
    return 0;
}
