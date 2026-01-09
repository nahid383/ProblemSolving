#include<stdio.h>
int main()
{
    int n,l;
    scanf("%d %d",&n,&l);
    float a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%f",&a[i]);
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
    float max_dif=0;
    for(int i=0; i<n-1; i++)
    {
        if((a[i+1]-a[i])>max_dif)
        max_dif=a[i+1]-a[i];

    }
    float result = max_dif/2;
    if(a[0]>result)
   result=a[0];
    if(l-a[n-1]>result)
    result=l-a[n-1];
    printf("%.10f",result);
}