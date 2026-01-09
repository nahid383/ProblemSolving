#include<stdio.h>
int main()
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d",&marks);

    if(marks>=80)
        printf("You got A+");

    else if(marks>=70)
        printf("You got A");

    else if(marks>=60)
        printf("You got B");

    else if(marks>=50)
        printf("You got C");

    else if(marks>=40)
        printf("You got D ");

    else if(marks>=33)
        printf("You are passed");

    else
        printf("You are failed");

    return 0;
}
