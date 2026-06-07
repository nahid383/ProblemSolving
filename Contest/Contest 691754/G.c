#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    int k=1;
    while(T--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        int maximum_sum=a[0];
        int current_sum = 0;
        int start = 0,end = 0, temp = 0;

        for(int i=0; i<n; i++)
        {
            current_sum = current_sum+a[i];
            if(maximum_sum<current_sum)
            {
                maximum_sum= current_sum;
                start= temp;
                end = i;
            }
            
            if(current_sum<0)
            {
                current_sum  = 0;
                temp = i+1;
            }
           
        }
        printf("Case %d:\n%d %d %d\n",k,maximum_sum,start+1, end+1);
        k++;
    }
    return 0;
}