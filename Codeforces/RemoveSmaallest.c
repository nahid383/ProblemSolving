#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }    
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(a[i]>a[j])
                {
                    int temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
        int diff=0;
        for(int i=1; i<n; i++)
        {
            if((a[i]-a[i-1])>1)
            {
               diff=1;
            }
        }
        if(diff==0)
        printf("YES\n");
        else
        printf("NO\n");
       
    }
}