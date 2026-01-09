#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a;
        int odd=0, even=0;
        for(int i=1; i<=(2*n); i++)
        {
            scanf("%d",&a);
            if(a%2==0)
                even++;
            else
                odd++;
        }
        if(odd==even)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
