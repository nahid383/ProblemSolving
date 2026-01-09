#include<stdio.h>
int main()

{
    int a,b,c;
    while(1){
    printf("Enter all the numbers:");
    scanf("%d %d %d",&a,&b, &c);
    printf("A=%d, B=%d, C=%d\n",a,b,c);
    if((a>b)&&(a>c))
       printf("%d ",a);

        else if((b>a)&&(b>c))
       printf("%d",b);
        else
            printf("C is the largest number.");
}
return 0;
}
