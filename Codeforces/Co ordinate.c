#include<stdio.h>
int main()
{
    int x1, y1;
    printf("Enter value of (x1,y1)= ");
    scanf("%d %d",&x1,&y1);
    if(x1>0&&y1>0)
    {
        printf("1st Quardant.");
    }
    else if(x1<0&&y1>0)
    {
        printf("2nd Quardant.");
    }
    else if(x1<0&&y1<0)
    {
        printf("3rd Quardant.");
    }
    else if(x1>0&&y1<0)
    {
        printf("4th Quardant.");
    }
    else
        printf("That point is on the line.");
}
