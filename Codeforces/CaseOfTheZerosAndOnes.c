#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char a[n];
    scanf("%s",&a);
    int one=0;
    int zero=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]=='0')
        zero++;
        else
        one++;
    }
    if(one>zero)
    printf("%d",one-zero);
    else
    printf("%d",zero-one);
}