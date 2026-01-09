#include<stdio.h>
int main()
{
    int i,length;
    char n1[101],n2[101], result[101];
    scanf("%s",&n1);
    scanf("%s",&n2);
    length=strlen(n1);
    for(i=0; i<length; i++)
    {
        result[i]=(n1[i]!=n2[i]) ? '1' : '0' ;
    }
    result[length]='\0';
    printf("%s",result);
    return 0;
}
