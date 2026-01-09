#include<stdio.h>
int main()
{

    int t;
    scanf("%d",&t);

    while(t--)
    {
        char s[11];
        int count = 0;
        scanf("%s",&s);

        if(s[0]!='c')
            count++;
        if(s[1]!='o')
            count++;
        if(s[2]!='d')
            count++;
        if(s[3]!='e')
            count++;
        if(s[4]!='f')
            count++;
        if(s[5]!='o')
            count++;
        if(s[6]!='r')
            count++;
        if(s[7]!='c')
            count++;
        if(s[8]!='e')
            count++;
        if(s[9]!='s')
            count++;
        printf("%d\n",count);
    }
    return 0;
}
