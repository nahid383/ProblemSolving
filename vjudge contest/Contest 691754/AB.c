#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i,j;
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);

    }
    int q;
    scanf("%d",&q);
    int b[q];
    for(i=0; i<q; i++)
    {
        scanf("%d",&b[i]);

    }
for(i=0; i<q; i++)
{
    int luchu=b[i];
    int shorter = -1, taller = -1;

    for(j=0; j<n; j++)

    {
        if(a[j]<luchu)
        {
            shorter=a[j];
            
        }
        else
        break;
    }

    for(j=0; j<n; j++)
    {
        if(a[j]>luchu)
        {
            taller=a[j];
            break;
        }
    }
    if(shorter==-1)
 
    printf("X ");
    else
    printf("%d ",shorter);
 if(taller==-1)
 printf("X\n");
 else
 printf("%d\n",taller);

}

 
}