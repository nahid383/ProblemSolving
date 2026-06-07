#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    char s[N+1];
    scanf("%s",s);
    for(int i=0; i<N-1; i++)
    {
        if((s[i]=='a' && s[i+1]=='b')||(s[i]=='b' && s[i+1]=='a')){
           printf("Yes\n");
           return 0;
        }
    }
  
    printf("No\n");
    return 0;
}