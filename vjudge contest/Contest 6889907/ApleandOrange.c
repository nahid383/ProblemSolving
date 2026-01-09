#include<stdio.h>
#include<math.h>
int main()
{
    int s, t;
    scanf("%d %d",&s,&t);
    int a, b;
    scanf("%d %d",&a,&b);
    int m, n;
    scanf("%d %d",&m,&n);
    int distanceofeachapple, distanceofeachorange;
    int numberofapple=0, numberoforange=0;
    for(int i=1; i<=m; i++)
        {
            scanf("%d",&distanceofeachapple);
            if((distanceofeachapple+a)>=s && (distanceofeachapple+a)<=t)
            numberofapple++;
        }
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&distanceofeachorange);
        if((distanceofeachorange+b)>=s && (distanceofeachorange+b)<=t)
        numberoforange++;
    }
    printf("%d\n%d",numberofapple,numberoforange);
}