#include<stdio.h>
int main()
{
    int n;
    int item;
    scanf("%d",&n);
    int array[n];
    int exex=0;
    for(int i=0; i<n; i++)
    {scanf("%d",&array[i]);
    }
    scanf("%d",&item);
    for(int i=0; i<n; i++)
    {
        if(array[i]==item)
        exex=1;
    
    }
    if(exex==1)
        printf("Yes");
    else
        printf("No");
}
