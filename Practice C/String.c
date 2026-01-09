#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s[51];

        int count =0;
        scanf("%s",s);
        for(int i=0; s[i]!='\0'; i++)
        {
            if(s[i]=='1')
                count++;
        }
        printf("%d\n",count);
    }
}
