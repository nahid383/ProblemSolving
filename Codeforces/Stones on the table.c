#include<stdio.h>
int main()
{
    int a=0, i,n;
    scanf("%d",&n);
    char s[n];
    scanf("%s",&s);

    for(i=1; i<n; i++)

        if(s[i-1]==s[i])
        a++;
    printf("%d",a);
    return 0;

}
