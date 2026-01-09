#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int y[n];
    int less_or_Equal_k=0;

    for(int i=0; i<n; i++)
    {
        scanf("%d",&y[i]);
        if(y[i]<=(5-k))
        less_or_Equal_k++;
    }
    printf("%d",less_or_Equal_k/3);

}