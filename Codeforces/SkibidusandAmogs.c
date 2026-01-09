#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        char W[11];
        scanf("%s",W);
        int length = strlen(W);

        W[length-1]=' ';
        W[length-2]='i';
        printf("%s\n",W);
    }
    
}