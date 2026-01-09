#include<stdio.h>
int main()
{
    char ch;
    int i,n,num;

    printf("How many times to show this letter:\n");
    scanf("%d",&num);
    printf("Write any letter here:");
    scanf("%c",&ch);
    for(i=1;i<=n; i++)
    {
        printf("%c\n",ch);
    }
    return 0;

}
