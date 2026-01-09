//multiplication of 2 matrix
#include<stdio.h>
int main()
{
    int A[10][10], B[10][10], result[10][10], r1,r2,c1,c2, i, j,k,sum=0;
    printf("Enter the number of rows and column of A matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("\n");
    printf("Enter the number of rows and column of B matrix: ");
    scanf("%d %d", &r2, &c2);
    printf("\n");
    while(c1!=r2)
    {
        printf("Error 465\n");
        printf("Enter the number of rows and column of A matrix: ");
        scanf("%d %d", &r1, &c1);
        printf("\n");
        printf("Enter the number of rows and column of B matrix: ");
        scanf("%d %d", &r2, &c2);
        printf("\n");
    }

    printf("Enter all the elements of A matrix: ");
    printf("\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("A [%d %d]= ",i,j);

            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

    printf("A = ");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("\t");
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Enter all the elements of B matrix: ");
    printf("\n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("B [%d %d]= ",i,j);

            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }

    printf("B = ");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("\t");
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            for(k=0; k<c1; k++)
            {
                sum=sum+A[i][k]*B[k][j];
            }
            result[i][j]=sum;
            sum=0;
        }
    }

    printf("Result = ");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {

            printf("%d ",result[i][j]);
        }
        printf("\n");
                  printf("\t");
    }
}
