#include<stdio.h>
int main()
{
    int n,t;
    scanf("%d %d",&n,&t);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int temp;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                int temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    int total_time =0;
    int no_of_books=0;

   for(int i=0; i<n; i++)
   {
    total_time = total_time + a[i];
    no_of_books++;
    if(total_time>t)
    break;
   }
   printf("%d\n",no_of_books-1);
    
}