#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,m;
        scanf("%d %d",&n,&m);
        int count = 0;
        int len = 0;
        char words[m];
        for(int i=0; i<n; i++)
        {
            scanf("%s",words);
            int length = strlen(words);
            if(len+length<=m){
                count++;
               
            }
            len+=length;
        }
        printf("%d\n",count);
    }
    
}