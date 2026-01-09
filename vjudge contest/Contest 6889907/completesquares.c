#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        int square = pow(i,2);
        printf("%d ",square);
    }
}
