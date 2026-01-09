#include<stdio.h>
int main()
{
    int i,marks[5];

    for(i=0; i<=4; i++)
    {
        scanf("%d\n",&marks[i]);
    }

    for(i=0; i<=4; i++)
    {
printf("Marks: %d\n",marks[i]);
    }
}
