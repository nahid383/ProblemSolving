#include<stdio.h>
int main()
{
    int t;

    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
           char b[101];
           scanf("%s",&b[101]);
           int stringlength = strlen(b);
        for(int j=0; j<strlen; j++)
        {
             if(b[j]!=b[j+1])
                printf("%s",b[j]);
        }

    }
}
