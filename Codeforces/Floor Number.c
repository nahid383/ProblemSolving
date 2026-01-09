#include<stdio.h>
int main()
{
    int t;
scanf("%d",&t);
while(t--)
{
    int n, x;
    int floor_number=0,s=1;
    scanf("%d %d",&n,&x);
    if(n<=2)
    {
           printf("%d\n",floor_number+1);
    }


    else if((n-2)%x==0)
    {
         floor_number = ((n-2)/x)+1;
printf("%d\n",floor_number);
    }
    else
    {
           floor_number = ((n-2)/x)+2;
        printf("%d\n",floor_number);
    }



}
}

