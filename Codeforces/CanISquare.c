#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
       
        int n;
        scanf("%d",&n);
        long long sum = 0;
        for(int i=0; i<n; i++)
        {
           int a;
            scanf("%d",&a);
            sum = sum+a;
        }
        long long root = sqrt(sum);
        long long square = root*root;
        if(square == sum)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
