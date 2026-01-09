#include<stdio.h>
int main()
{
    float i;
    i=1;
    nahid:
        printf("%.3f\t",i);
        i++;

        if(i<9)
            goto nahid;
}
