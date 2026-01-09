#include<stdio.h>
int main()
{
    int a, b,c;
    scanf("%d %d %d", &a, &b, &c);
    a==90 || b == 90 || c== 90?printf("right"):(a<(b+c))&&(b<(a+c))&&(c<(a+b))?printf("Acute"):printf("Obtuse");
}
