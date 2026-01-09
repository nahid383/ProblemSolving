#include <stdio.h>


int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int nahid;
        scanf("%d", &nahid);
        
        if (nahid == 0)
        {
            printf("1\n");
            
        }
        
        else    if (nahid % 15 == 0)
        {
            int div = (nahid / 15);
            int solution = div * 3 + 1;
            printf("%d\n", solution);
           
        }
        else
        {
            int div = nahid/15;
            int solution = div*3 + 1;
            for(int i = div*15 +1; i<=nahid; i++)
            {
                if(i%3==i%15)
                solution++;
            }
            printf("%d\n",solution);
        }
    
    }
    return 0;
}
