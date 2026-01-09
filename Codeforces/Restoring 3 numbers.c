#include<stdio.h>
int main()
{
    int array[4], max,result1,result2,result3;
    for(int i=0; i<=3; i++)
    {
        scanf("%d",&array[i]);
    }

        if((array[0] > array[1]) && (array[0]>array[2]) && (array[0]>array[3]))
            {
                  result1=array[0] - array[1];
                  result2=array[0] - array[2];
                  result3=array[0] - array[3];
                  printf("%d %d %d",result1,result2,result3);
            }
             else if((array[1] > array[0]) && (array[1]>array[2]) && (array[1]>array[3]))
            {
                  result1=array[1] - array[0];
                  result2=array[1] - array[2];
                  result3=array[1] - array[3];
                  printf("%d %d %d",result1,result2,result3);
            }
             else if((array[2] > array[1]) && (array[2]>array[0]) && (array[2]>array[3]))
            {
                  result1=array[2] - array[1];
                  result2=array[2] - array[0];
                  result3=array[2] - array[3];
                  printf("%d %d %d",result1,result2,result3);
            }
          else
              {
                  result1=array[3] - array[1];
                  result2=array[3] - array[0];
                  result3=array[3] - array[2];
                  printf("%d %d %d",result1,result2,result3);
            }

   return 0;
}
