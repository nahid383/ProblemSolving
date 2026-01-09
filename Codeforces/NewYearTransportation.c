#include<stdio.h>
int main()
{
    int n,t;
    scanf("%d %d",&n,&t);
    int a[n];
    for(int i=1; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int position =1;
    while(position<t)
    {
        position=position+a[position];

    }
    if(position==t)
    printf("YES\n");
    else
    printf("NO\n");
}