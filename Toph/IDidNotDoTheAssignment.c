#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int count=0;
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
        count++;
    }
    if(count==2)
    {
        printf("NO PUNISHMENT\n");
        return 0;
    }
    for(int i=0; i<n; i++)
    {
        printf("I DID NOT DO THE ASSIGNMENT.\n");
    }
}