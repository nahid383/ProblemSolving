#include<stdio.h>
int main()
{
float score,totalscore=0;
for(int i=1; i<=5; i++)
{
   printf("Enter score %d: ",i);
   scanf("%f",&score);
   totalscore=totalscore+score;
}
printf("Total : %.0f\n",totalscore);
float average = totalscore/5;
printf("Average: %.1f\n",average);
if(average>=90)
    printf("Grade: A");
else if(average>=80 && average<90)
    printf("Grade: B");
    else if(average>=70 && average<80)
    printf("Grade: C");
    else if(average>=60 && average<70)
    printf("Grade: D");
    else if(average<60)
    printf("Grade: F");

    return 0;
}
