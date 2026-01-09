#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a , b, c;
        scanf("%d %d %d",&a,&b,&c);
        int value = abs(a-b);
        int result;
        if(a==b)
        printf("0\n");
        else if(value<c)
        printf("1\n");
        else if(value%c==0)
        {
            result= value/(c);
            if(result%2==0)
            printf("%d\n",result/2);
            else
            printf("%d\n",(result/2)+1);
        }
        else if(value%c!=0)
        {
            result=value/(2*c);
            printf("%d\n",result+1);
        }
    }
} 