#include<Stdio.h>
int main()
{
    int x,y;
    printf("Enter value of x: ");
    scanf("%d",&x);
    y=x++;
    printf("x= %d\n",x);
    printf("y= %d\n",y);

      int a,b;
    printf("Enter value of a: ");
    scanf("%d",&a);
    b=++a;
    printf("a= %d\n",a);
    printf("b= %d",b);
}
