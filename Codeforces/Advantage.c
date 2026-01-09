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
        int maximum=0;
          int maximum2=0;
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            if(a[i]>maximum)
            {
                maximum2=maximum;
                maximum=a[i];
            }
            else if(a[i]>maximum2)
            {
                maximum2=a[i];
            }
          

        }
        
     
        
        for(int i=0; i<n; i++)
        {
            if(a[i]==maximum)
            printf("%d ",maximum-maximum2);
            else
            printf("%d ",a[i]-maximum);
        }
        printf("\n");
        
    }
}