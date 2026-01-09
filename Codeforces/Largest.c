#include<stdio.h>
int main()
{
    int n,max=0;
    scanf("%d",&n);
    int p;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&p);
        if(max<p)
            max=p;
    }

    printf("%d",max);
}
