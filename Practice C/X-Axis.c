#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x1,x2,x3;
        scanf("%d %d %d",&x1,&x2,&x3);
        int sum1,sum2,sum3;
        sum1=abs(x1-x2)+abs(x1-x3);
        sum2=abs(x2-x1)+abs(x2-x3);
        sum3=abs(x3-x1)+abs(x3-x2);
      int min =101;
      if(sum1<min)
        min=sum1;
      if(sum2<min)
        min=sum2;
      if(sum3<min)
        min=sum3;

      printf("%d\n",min);
    }
}
