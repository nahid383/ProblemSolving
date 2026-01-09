#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int array[n];
        for(int i=0; i<n; i++)
        {
            array[i]=i+1;
            
        }

        for(int i=0; i<n-1; i=i+2)
        {
               int temp = array[i];
                array[i]=array[i+1];
                array[i+1]=temp;
        }
        if(n%2==1)
        {
          int temp = array[n - 1];
            array[n - 1] = array[n - 2];
            array[n - 2] = temp;

        }
      
                 for(int i=0; i<n; i++)
        {
            printf("%d ",array[i]);
        }
        printf("\n");
        }
       return 0;
    }
