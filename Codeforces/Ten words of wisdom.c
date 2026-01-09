#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[51], b[51],point=-1,all=-1;
        for(int i=1; i<=n; i++)
        {
            scanf("%d %d",&a[i],&b[i]);
            if(a[i]<=10)
            {
                if(b[i]>point){
                    point = b[i];
                    all=i;}
            }
        }
        printf("%d\n",all);
        point=0;
    }
}
