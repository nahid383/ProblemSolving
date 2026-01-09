#include<stdio.h>
int main()
{
    int n,ways=1;
    scanf("%d",&n);
    for(int i=2; i<n; i++)
    {
        if(n%i==0)
            ways++;
    }
    printf("%d",ways);
}
