#include<stdio.h>
int main()
{
    int T;
      int i=1;
    scanf("%d",&T);
    while(T--)
    {
      
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if((a+b<c)  || (b+c<a)  ||  (a+c<b))
        {
            printf("Case %d: Invalid\n",i);
            
        }
        else if(a==b && b==c && c==a)
        {
            printf("Case %d: Equilateral\n",i);
   
        }
        else if(a==b || b==c || c==a)
        {
            printf("Case %d: Isosceles\n",i);
           
        }
        else if(a!=b && b!=c && c!=a)
        {
            printf("Case %d: Scalene\n",i);
            
        }
        i++;
        
    } 
    return 0;
}