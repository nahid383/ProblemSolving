#include<stdio.h>
int main()
{
    int time;
    printf("Enter the time right now in hours only: ");
    scanf("%d",&time);

    if(time<=11){
    printf("Goood Morning ");
    printf("Nahid");
    }
    if(11<time<=15){
        printf("Good Noon ");
        printf("Nahid");
    }
    if(15<time<=18){
        printf("Good Afternoon ");
        printf("Nahid");
    }
    if(18<time<=24){
                printf("Good Night ");
        printf("Nahid");
    }
}
