#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        char s[n];
        scanf("%s",s);
        int ans = n;
        int l=0, r=n-1;
        while(l<r && s[l] != s[r])
        {
            l++; 
            r--;
            ans = ans-2;
        }
        printf("%d\n",ans);
    }
}