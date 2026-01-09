//2  1  3  4  7   11

#include<stdalign.h>
int main()
{
    int first=2,second=1,lucas, n,count=0;
    printf("Enter range: ");
    scanf("%d",&n);


    printf("%d  %d",first,second);

    while(count<n)
    {

                lucas=first+second;
                first=second;
                second=lucas;

                printf("    %d  ",lucas);
    count++;
    }

}
