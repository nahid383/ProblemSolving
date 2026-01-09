#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char chara[10];
        int a=0, b=0, c=0;
        for(int i=0; i<9; i++)
        {
            scanf("%s",chara[i]);
        }
        if(a==2)
            printf("A\n");
        else if(b==2)
            printf("B\n");
        else if(c==2)
            printf("C\n");
    }
    return 0;
}
