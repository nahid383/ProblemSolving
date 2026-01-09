#include<stdio.h>
int main()
{
    int n, k, l, c, d, p, nl, np,min;
    scanf("%d %d %d  %d %d %d %d %d",&n, &k, &l, &c, &d, &p, &nl, &np);
    int toast1 = (k*l)/(nl*n);
    int toast2 = (c*d)/n;
    int toast3 = p/(np*n);

    if(toast1<toast2&&toast1<toast3)
        min=toast1;
    else if(toast2<toast1&&toast2<toast3)
        min=toast2;
    else
        min=toast3;
        printf("%d",min);
}
