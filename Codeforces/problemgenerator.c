#include<stdio.h>
#include<string.h>

int main()

{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        scanf("%d %d",&n,&m);
        char a[n+1];
        scanf("%s",a);
        int count[7]={0};
        int A=0,B=0,C=0,D=0,E=0,F=0,G=0;
        int number_needed=0;
        for(int i=0; i<n; i++)
        {
           count[a[i]-'A']++;
        }
       for(int i=0; i<7; i++)
       {
        if(count[i]<m)
        {
            number_needed=number_needed+(m-count[i]);
        }
       }
        printf("%d\n",number_needed);
    }   
    return 0;
}