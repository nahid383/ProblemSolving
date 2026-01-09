#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
              int min,max=0;
                         int a[10];
        for(int i=0; i<n; i++)
        {
                    scanf("%d",&a[i]);
                    if(max<a[i])
                        max=a[i];
        }
min=max;
for(int k=0; k<n; k++)
{
    if(a[k]<min)
        min=a[k];

}

 int maximum_product=1;
        for(int j=0; j<n; j++)
        {

            if(a[j]==min)
            {
                maximum_product=maximum_product*(a[j]+1);

            }
            else
                maximum_product=maximum_product*a[j];
        }
            printf("%d\n",maximum_product);
    }}
