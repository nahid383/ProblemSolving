#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
         int current =0,maximum=0 ;
        int n;
        scanf("%d",&n);
        int a[n];

        for(int i=0; i<n; i++)
        {
             scanf("%d",&a[i]);
        }
        for(int i=0; i<n; i++)
        {
            if(a[i]==0)
            {
                      current++;
            }
            else{
                if(current>maximum)
                    {
                        maximum=current;
                    }
                    current=0;
            }

        }
        if(current>maximum)
            maximum=current;


 printf("%d\n",maximum);
        }

    }


