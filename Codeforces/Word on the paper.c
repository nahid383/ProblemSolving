#include<stdio.h>
int main()
{

    int t;
    scanf("%d",&t);

    while(t--)
    {
          char c[65];
        for(int i=0; i<8; i++)
        {
            for(int j=0; j<8; j++)
            {
                scanf("%c",&c[i*8+j]);
            }
        }
          for(int i=0; i<=8; i++)
        {
            char word[9]={0};
            int wordindex=0;
            for(int j=0; j<=8; j++)
            {
                if(c[j*8+i]!='.')
                   word[wordindex++] = c[j*8+i];
            }
            if(wordindex>0)
                printf("%s\n",word);
            break;
        }
    }

    return 0;
}
