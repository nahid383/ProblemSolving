#include<stdio.h>
#include<math.h>

int main()
{
   int N,i,j;
   int flag=0;
   scanf("%d",&N);
   int a[N];
   for(i=0; i<N; i++)
   {
    scanf("%d",&a[i]);
   }
   int received_money;
   int price_books;
   int buying_books1=0;
   int buying_books2=0;
   int difference=1000001;
   scanf("%d",&received_money);
   
    for(i=0; i<N; i++)
    {
        for(j=i+1; j<N; j++)
        {
            price_books= a[i]+a[j];
            if(price_books==received_money)
            {
                if(difference>(abs(a[i]-a[j])))
                {
                    difference=abs(a[i]-a[j]);
                    buying_books1=a[i];
                    buying_books2=a[j];
                  
                }
               
            }
           
        }
        
    
   }
   printf("Peter should buy books whose prices are %d and %d.",buying_books1,buying_books2);
printf("\n");
}