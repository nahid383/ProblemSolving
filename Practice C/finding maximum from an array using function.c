#include<stdio.h>
int maximum(int x[])
{
    int i;
    int max=x[0];
for(i=0; i<12; i++)
{
    if(max<x[i])
        max=x[i];
}
return max;
}
int main()
{
    int num[]={125,258,369,75,19,358,452,986,969,336,1,4};
   int maximumvalue =  maximum(num);
   printf("%d",maximumvalue);
}

