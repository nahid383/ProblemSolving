#include<stdio.h>
int main()
{
    int num[]={1,2,3,4,5,6,61,75,62,625,123,456,789,852,963,741,147,258,369,159,753,842,268,759,555};
    int i, value;
    printf("Enter any value what you want to search: ");
    scanf("%d",&value);
    int position=-1;

    for(i=0; i<25; i++)
    {
        if(value==num[i])
        {
            position=i+1;
        break;
        }

    }
        if(position==-1)
            printf("Not found");
        else
            printf("Your search number is %d and its position is %d index",value, position-1);
}
