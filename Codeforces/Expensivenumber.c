#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
    char n[100005];
    scanf("%s",n);
    int a=0; 
    int count = 0;
    int len=strlen(n);
    for(int i=0; i<len; i++)
    {
        if(n[i]=='0')
        {
            count++;
        }
        else{
        if(a<count+1)
        {
            a=count+1;
        }}
    }
    printf("%d\n",len-a);
}
}