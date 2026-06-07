#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int frequency[6]={0};
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        frequency[a[i]]++;

    }
    int minimum=0;
    int num;
    for(int i=1; i<6; i++)
    {
        if(frequency[i]>minimum)
        {
            minimum=frequency[i];
            num=i;
        }
        else if(frequency[i]==minimum)
        {
            if(i<num)
            {
                num=i;
            }
        }

    }
    printf("%d\n",num);
}