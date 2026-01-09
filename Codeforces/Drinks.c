#include<stdio.h>
int main()
{
    float n, i, pi, addition=0, result;
    scanf("%f",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%f", &pi);
        addition=addition+pi;
    }
    printf("%f",addition/n);
    return 0;
}
