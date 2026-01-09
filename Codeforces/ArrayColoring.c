#include<stdio.h>
int main()
{ 
    int t;
    scanf("%d",&t);
    while (t--)
    {
                  int n;
    scanf("%d",&n);
    int a[n];
    int odd_count = 0;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==1)
        odd_count++;
    }
    if(odd_count%2==0)
    printf("Yes\n");
    else
    printf("No\n");
    
    }
    
  
}