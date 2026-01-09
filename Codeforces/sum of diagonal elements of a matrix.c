//sum of diagonal elements of a matrix

#include<stdio.h>
int main()
{
    int i, j, numberOfRows, numberOfCols;
    int A[15][15];

    printf("Enter the numbers of rows and column of A matrix: ");
    scanf("%d %d", &numberOfRows, &numberOfCols);

    printf("Enter all the elements of A matrix: ");
    printf("\n");

    for(i=0; i<numberOfRows; i++)
    {
        for(j=0; j<numberOfCols; j++)
        {
            printf("A[%d %d]= ",i,j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }

printf("\n A= ");
    for(i=0; i<numberOfRows; i++)
    {
        for(j=0; j<numberOfCols; j++)
        {
            printf("\t");
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }


printf("Sum of diagonal elements of A matrix: ");

int sum=0;

 for(i=0; i<numberOfRows; i++)
    {
        for(j=0; j<numberOfCols; j++)
        {
            if(i==j)
            {
                            sum=sum+A[i][j];
            }
        }
    }

    printf("%d",sum);

}
