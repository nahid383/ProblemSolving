#include<stdio.h>
int main()
{
    int n,p,q,i,j,room=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&p);
        scanf("%d",&q);
        if(q-p>=2)
        {
            room++;
        }

    }
      printf("%d",room);
}
