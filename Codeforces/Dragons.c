#include<stdio.h>
int main()
{
    int s,n;    //s-kritos strength n-no of dragons
    scanf("%d %d",&s,&n);
    int  x[n],y[n];
   

    for(int i=0; i<n; i++)
    {
        scanf("%d %d",&x[i],&y[i]);
    }
   
   for(int  i=0; i<n-1; i++)
   {
    for(int j=0; j<n-1-i; j++)
    {
        if(x[j]>x[j+1])
        {
            int temp=x[j];
            x[j]=x[j+1];
            x[j+1]=temp;

            temp=y[j];
            y[j]=y[j+1];
            y[j+1]=temp;

        }
    }
   }

   int score=0;
   for(int i=0; i<n; i++)
   {
    if(s>x[i])
    {
        s=s+y[i];
        score++;
    }
    else
    break;
   }
    if(score==n)
    printf("YES\n");
    else
    printf("NO\n");
    
  
}