#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,j,k;

    scanf("%d",&t);
    for(i=1; i<=t; i++)

    {
        char a[4], b[4];
        scanf("%s %s",a,b);
        char temp = a[0];
        a[0]=b[0];
        b[0]=temp;
        printf("%s %s\n",a,b);
    }
return 0;
}
