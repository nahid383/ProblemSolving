#include<stdio.h>
int main()
{
    int count=1;
    char line[] = "1 -2 1000 -50 20 7 445";
    for(int i=0; line[i]!='\0'; i++)
    {
        if(line[i]==' ')
            count++;
    }
    printf("%d",count);
}

