#include<stdio.h>
int main()
{
    int  n;
    scanf("%d",&n);

    int ans = n/100;
    int left = n%100;

    ans = ans +(left/20);
    left = left%20;

      ans = ans +(left/10);
    left = left%10;

      ans = ans +(left/5);
    left = left%5;

      ans = ans +(left/1);

    printf("%d",ans);
}
