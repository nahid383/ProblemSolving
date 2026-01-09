#include<stdio.h>
#include<math.h>
int main()
{
    int startingpoint, endingpoint,num,i ,totalprimenumber=0,sumofprimenumber=0,count=0;
    printf("Enter starting point:");
    scanf("%d",&startingpoint);
    printf("Enter ending point:");
    scanf("%d",&endingpoint);
    for(num=startingpoint; num<=endingpoint; num++)
    {
        count=0;
        if(num<=1){
            count=1;}
            else{
        for(i=2; i<=sqrt(num); i++)
        {
            if(num%i==0)
            {
                count=1;
                break;
            }
        }
            }

            if(count==0)
{
    printf("%d ",num);
    totalprimenumber++;
    sumofprimenumber=sumofprimenumber+num;
}
    }


    printf("Total primenumber:  %d\n", totalprimenumber);
    printf("Sum of prime number:  %d\n", sumofprimenumber);

    return 0;

}
