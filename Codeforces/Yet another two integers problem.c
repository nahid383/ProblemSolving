#include<stdio.h>
int main()
{
    int t, a, b,remaining,moves;
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
        scanf("%d %d",&a,&b);
        if(a>b)
        {
            remaining=a-b;
            if(remaining%10!=0)
            moves=(remaining/10)+1;
            else
                moves=remaining/10;
        }
        else if(a<b)
        {
              remaining=b-a;
              if(remaining%10!=0)
            moves=(remaining/10)+1;
            else
                moves=remaining/10;
        }
        else
            moves = 0;
              printf("%d\n",moves);
    }

}
