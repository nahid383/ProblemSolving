#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char name[33];
    int reg;
    for(int i=0; i<n; i++)
    {
        scanf("%s",name);
        if(reg[name]==0)
        {
            reg[name]=1;
            printf("OK\n");
        }
        else
        printf("%s")
    }
}