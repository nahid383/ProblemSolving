#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a;
    int sum = 0;
    int count_4=0;
    int count_3=0;
    int count_2=0;
    int count_1=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a);
        if(a==1)
        count_1++;
        else if(a==2)
        count_2++;
        else if(a==3)
        count_3++;
        else
        count_4++;
    }
    int count = 0;
    count = count + count_4;
   
    count = count + count_3;
    count_1 = count_1 - count_3;
    if(count_1<0)
    count_1 = 0;

    count = count + count_2/2;

    if(count_2%2==1)
    {
        count++;
        count_1 = count_1 - 2;
    }

    if(count_1>0)
    {
        count = count + (count_1+3)/4;
    }

  printf("%d\n",count);
}