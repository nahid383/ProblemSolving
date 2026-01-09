#include<stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n];
    int max = 0;
    int max_Ind = 0;

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        int round = (a[i] + m - 1) / m;
        if(round >= max)
        {
            max = round;
            max_Ind = i + 1;
        }
    }

    int maxRound = max;
    int ans = max_Ind;

    printf("%d\n", ans);
}
