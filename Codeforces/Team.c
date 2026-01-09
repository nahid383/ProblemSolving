#include<stdio.h>
int main()
{
    int p, v, t, i,num, count=0;

    printf("Enter the number of problems: ");
    scanf("%d",&num);
    for(i=0; i<num; i++)
    {

        scanf("%d %d %d",&p, &v, &t);
        if((p == 1 && v == 1 && t == 1)||(p == 1 && v == 1 && t== 0)||(p == 1 && v == 0 && t == 1)||(p ==0 && v == 1 && t == 1))

            count++;
    }
    printf("%d",count);
}
