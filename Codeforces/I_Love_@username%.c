#include<stdio.h>
int main()
{
    int n,count=0,max,min;
    scanf("%d",&n);
    int t[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d",&t[i]);
    }
    max=t[0];
    min=t[0];
    for(int i=1; i<n; i++)
    {
        if(t[i]>max)
            {
            count++;
        max=t[i];
        }
        else if(t[i]<min)
        {
            count++;
            min=t[i];
        }
    }
    printf("%d\n",count);
    return 0;
}
