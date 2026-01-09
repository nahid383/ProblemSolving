#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n, k,count=0;
        scanf("%d %d",&n,&k);
        int array;
        for(int i=1; i<=n; i++){
        scanf("%d",&array);
        if(array==k)
            count=1;
        }
        if(count==1)
            printf("Yes\n");
        else
            printf("No\n");
    }
}

