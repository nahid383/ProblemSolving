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
        int mihai=0, bianca=0;
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a);
            if(a%2==0)
                mihai=mihai+a;
            else
                bianca=bianca+a;
        }
        if(mihai>bianca)
            printf("yes\n");
        else
            printf("No\n");
    }
}
