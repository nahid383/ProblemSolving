#include<stdio.h>
int main()
{
    char name[100];
    int n, i;
    printf("Enter any letter:");
    gets(name);
    printf("Enter any number you want to show:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        puts(name);
    }
}
