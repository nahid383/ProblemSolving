#include<stdio.h>
int main()
{
    int n,mishika=0,chris=0;
    scanf("%d",&n);
    int m, c;
    for(int i=0; i<n; i++)
    {
        scanf("%d %d",&m, &c);
        if(m>c)
            mishika++;
        else if(c>m)
            chris++;
    }
    if(mishika>chris)
    {
        printf("Mishka");
    }
    else if(chris>mishika)
    {
        printf("Chris");
    }
    else
        printf("Friendship is magic!^^");
}
