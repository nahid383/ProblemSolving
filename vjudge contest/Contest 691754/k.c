#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int array[N];
    for(int i=0; i<N; i++)
    {
        scanf("%d",&array[i]);
    }
    int prefix_sum[N+1];
    prefix_sum[0]= 0;
    for(int i=1; i<=N; i++)
    {
        prefix_sum[i]=prefix_sum[i-1]+array[i-1];
    }

    int Q;
    scanf("%d",&Q);
    int i, j;
    for(int k=0; k<Q; k++)
    {
        scanf("%d %d",&i,&j);

        printf("%d\n",prefix_sum[j+1] - prefix_sum[i]);
    }
    return 0;
}