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
        int sum = 0;
        int evenflag = 0;
        int oddflag =0;
        for(int i=1; i<=n; i++)
        {
            scanf("%d",&a);
            if(a%2==0)
                evenflag=1;
            else
                oddflag=1;
            sum = sum + a;
        }
        if(sum%2!=0 || (evenflag && oddflag))
            printf("Yes\n");
        else
            printf("No\n");
    }
}
