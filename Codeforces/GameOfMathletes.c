#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k;
        scanf("%d %d",&n,&k);
        int a[n],freq[n+1];

        for (int i = 0; i <= n; i++) 
        freq[i] = 0;  

        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            freq[a[i]]++;

        }

        int score=0;

        for(int i=0; i<n; i++)
        {
                    int num = a[i];
                   int complement = k-num;

                   if(complement>=1 && complement<=n && freq[num]>0 && freq[complement]>0)
                   {
                    if(num==complement && freq[num]<2)
                        continue;
                        score++;
                        freq[num]--;
                        freq[complement]--;
                    
                   }
                
            }
            printf("%d\n",score);
        }
        return 0;
      
       
}
