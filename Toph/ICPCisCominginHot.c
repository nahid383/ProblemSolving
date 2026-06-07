#include<stdio.h>
#include<string.h>
int main()
{
    char name[1001];
    int freq[10]={0};

    scanf("%s",name);
    int len = strlen(name);
    for(int i=0; i<len; i++)
    {
        freq[name[i]-'0']++;

    }
    int max_freq=0;
    int min_digit=0;
    for(int i=0; i<10; i++)
    {
        if(freq[i]>max_freq || (freq[i]=max_freq && i<min_digit))
        {
            max_freq=freq[i];
            min_digit = i;
        }
    }
    printf("%d\n",min_digit);
}