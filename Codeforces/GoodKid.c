#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        /* code */
        int n;
        scanf("%d",&n);
        int a[n];
        int minimum=10;
        int product = 1;
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            if(minimum>a[i])
            {
                minimum=a[i];
            }
             
        }
        for(int i=0; i<n; i++)
        {
              if(a[i]==minimum)
              {
                a[i]=a[i]+1;
                break;

              }
           
        }
        for(int i=0; i<n; i++)
        {
             product= product*a[i];
        }
        printf("%d\n",product);
    }
    
}