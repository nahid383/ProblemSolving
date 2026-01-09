#include<stdio.h>
int main()
{
    int steps;
    scanf("%d",&steps);
    char paths[steps];
    scanf("%s",paths);
    int counting_valleys=0;
    int position =0;
    for(int i=0; i<steps; i++)
    {
        if(paths[i]=='U')
        position++;
        else if(paths[i]=='D')
        position--;
        if(position==0 && paths[i]=='U')
        counting_valleys++;
    }
    printf("%d\n",counting_valleys);

}