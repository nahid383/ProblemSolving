#include<stdio.h>
#include<string.h>
int main()
{
    char s[101];
    scanf("%s",s);
    int length = strlen(s);
    char hello[] = "hello";
    int j=0; 
    for(int i=0; i<length; i++)
    {
        if(s[i]==hello[j])
        j++;
        if(j==5)
        {
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");
    return 0;

}