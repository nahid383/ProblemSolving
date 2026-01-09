#include<stdio.h>
int main()
{
    int n;
    int count =1;
    int maximum=1;
    scanf("%d",&n);
    int array[ n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    for(int i=0; i<n-1; i++)
    {
        if(array[i]<array[i+1])
        {
                      count++;
                      if(maximum<count)
                        maximum=count;
        }

            else
                count=1;
    }
    printf("%d\n",maximum);

    return 0;
}
