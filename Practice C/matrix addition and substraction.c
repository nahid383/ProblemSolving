//addition and subtraction of simple  matrix

#include<stdio.h>
int main()
{
    int i, j, numberofrows, numberofcols;
    int A[10][10], B[10][10], C[10][10], D[10][10];
    printf("Enter number of rows and cols: ");              //scanning row and colum number
    scanf("%d %d", &numberofrows, &numberofcols);

    printf("\nEnter all the elements of A matrix: \n");
    for(i=0; i<numberofrows; i++)
        {
            for(j=0; j<numberofcols; j++)                   //scanning all the elements of A matrix
                {
                    printf("A [%d %d] = ", i,j );
                scanf("%d", &A[i][j]);
                }
                printf("\n");
        }

        printf("\nA = ");

        for(i=0; i<numberofrows; i++)
        {
            for(j=0; j<numberofcols; j++)               //printing all the elements of A matrix
            {
                printf("\t");
                printf("%d  ",A[i][j]);
            }
            printf("\n");
        }

          printf("\nEnter all the elements of B matrix: \n");
    for(i=0; i<numberofrows; i++)
        {
            for(j=0; j<numberofcols; j++)                           //scanning all the elements of B matrix
                {
                    printf("B [%d %d] = ", i,j );
                scanf("%d", &B[i][j]);
                }
                printf("\n");
        }

        printf("\nB = ");

        for(i=0; i<numberofrows; i++)
        {
            for(j=0; j<numberofcols; j++)                       //printing all the elements of B matrix
            {
                printf("\t");
                printf("%d  ",B[i][j]);
            }
            printf("\n");
        }

for(i=0; i<numberofrows; i++)
{
    for(j=0; j<numberofcols; j++)               //addition of a and b matrix
    {
        C[i][j]=A[i][j] + B[i][j];
    }
}
printf("\nSummation of A & B matrix: ");
printf("\nA + B = ");

for(i=0; i<numberofrows; i++)
{
    for(j=0; j<numberofcols; j++)           //printing c matrix
    {
        printf("%d  ", C[i][j]);
    }
    printf("\n");
    printf("\t");
}

for(i=0; i<numberofrows; i++)
{
    for(j=0; j<numberofcols; j++)               //subtraction of a and b matrix
    {
        D[i][j]=A[i][j] - B[i][j];
    }
}
printf("\nSubtraction of A & B matrix: ");
printf("\nA - B = ");

for(i=0; i<numberofrows; i++)
{
    for(j=0; j<numberofcols; j++)           //printing d matrix
    {
        printf("%d  ", D[i][j]);
    }
    printf("\n");
    printf("\t");
}

    }

