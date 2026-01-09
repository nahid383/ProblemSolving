#include<stdio.h>

void compute_b(char a[], char b[])
{
    int n = strlen(a);
    for(int i=0; i<n; i++){
        char ch = a[n-1-i];
        if(ch=='p')
        {
            b[i]='q';
        }
        else if(ch == 'q')
        {
            b[i]='p';
        }
        else
            b[i]='w';
    }
    b[n]='\0';
}
int main()
{
    int t;
    char a[100], b[100];
    scanf("%d",&t);
    for(int i=1; i<=t; i++){
            scanf("%s",&a);
          compute_b(a,b);
          printf("%s\n",b);
    }
    return 0;
}

