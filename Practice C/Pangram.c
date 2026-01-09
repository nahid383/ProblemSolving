#include<stdio.h>
#include<string.h>
int main()
{
    int n,f=0;
    char string[101],i,j;
    scanf("%d",&n);
    gets(string);
    for(i='a', j='A'; i<='z', j<='Z'; i++, j++)
    {
        f=0;
        for(int k=0; string[k]!='\0'; k++)
        {
            if((string[k]==i)||(string[k]==j))
               {
                   f=1;
                   break;
               }
        }
        if(f==0)
            break;
    }
    if(f==1)
        printf("YES");
    else
        printf("NO");
}
