#include<stdio.h>
#include<math.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
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
    int sum = 0;
    for(int i=0; i<m; i++)
    {
       if(a[i]<0)
       sum = sum+abs(a[i]);
       
    }
    printf("%d",sum);
}