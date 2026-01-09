#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        char s[n+1];
        scanf("%s",s);
        int one = -1, zero =-1;

        for(int i=0; i<n; i++)
        {
            if (s[i] == '1' && one == -1) {
                one = i;
            }
            if (s[i] == '0') {
                zero = i;
            }
        }

        if (one == -1 || zero == -1 || one > zero) {
            printf("0\n");
        } else {
            printf("%d\n", zero - one + 1);
        }

    }
    return 0;
    
}