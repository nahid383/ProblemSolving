#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        int maxi = 0;

        for (int i = 0; i <= 5; i++)
        {
            for (int j = 0; j <= 5 - i; j++)
            {
                for (int k = 0; k <= 5 - i - j; k++)
                {
                    int calc = (a + i) * (b + j) * (c + k);
                    if (calc > maxi)
                        maxi = calc;
                }
            }
        }
        printf("%d\n", maxi);
    }
}
