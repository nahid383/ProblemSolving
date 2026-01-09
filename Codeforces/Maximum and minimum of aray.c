//Print maximum and minimum number of any array
#include<stdio.h>
int main()
{
    int n, i, num[100], max, min;
    printf("Enter your range: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d\n",&num[i]);
    }

    max=num[0];

    for(i=0; i<n; i++)
    {

    if(max<num[i])
        max=num[i];
    }
        printf("Maximum number is: %d\n",max);

        min=num[0];
        for(i=0; i<n; i++)
        {
            if(min>num[i])
                min=num[i];
        }
        printf("Minimum number is: %d\n",min);
}
