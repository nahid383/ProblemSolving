#include<stdio.h>
int main()
{
    int t,first, last;
    char string[7];
    scanf("%d",&t);
while(t--)
    {
             scanf("%s",string);
             first=string[0] +string[1] +string[2];

             last=string[3]+string[4] +string[5] ;

             if(first == last)
                printf("YES\n");
             else
                printf("NO\n");
        }
            return 0;

}
