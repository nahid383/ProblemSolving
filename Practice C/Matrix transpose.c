//transpose of a matrix
#include<stdio.h>
int main()
{
    int A[10][10],transpose[10][10], i,j,numberofrows, numberofcols;

    printf("Enter number of row and cols of A matrix: ");
    scanf("%d %d",&numberofrows, &numberofcols);



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
        for(j=0; j<numberofcols; j++)
        {
            printf("\t");
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

     for(i=0; i<numberofrows; i++)
    {
        for(j=0; j<numberofcols; j++)
        {
                transpose[j][i]=A[i][j];
        }
        printf("\n");
    }
printf("\n Transpose of A = ");
printf("\n");
     for(i=0; i<numberofcols; i++)
    {
        for(j=0; j<numberofrows; j++)
        {
printf("\t");
            printf("%d ",transpose[i][j]);
        }
        printf("\n");

    }
}
