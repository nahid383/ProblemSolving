//getting input for 2d array


#include<stdio.h>
int main()
{
    int  i , j ;
    int A[3][4] , B[2][3];

    printf("Enter all elements of A matrix: \n");       //printing a matrix;
    for(i=0; i<3; i++)
        {
            for(j=0; j<4; j++)                          //scanning elements of  a matrix;
            {
            printf("A[%d][%d] : ",i,j);
                scanf("%d",&A[i][j]);
            }
            printf("\n");
        }

printf("A= ");
        for(i=0; i<3; i++)
        {
            for(j=0; j<4; j++)              //printing elements of a matrix;
            {
                printf("\t");
                printf("%d  ",A[i][j]);
            }
            printf("\n");
        }


  printf("\nEnter all elements of B matrix: \n");                 //printing b matrix;
    for(i=0; i<2; i++)
        {
            for(j=0; j<3; j++)
            {
            printf("B[%d][%d] : ",i,j);
                scanf("%d",&B[i][j]);                                   //scanning elements of  b matrix;
            }
            printf("\n");
        }
printf("B= ");
        for(i=0; i<2; i++)
        {
            for(j=0; j<3; j++)
            {
                printf("\t");
                printf("%d  ",B[i][j]);                        //printing elements of b matrix;
            }
            printf("\n");
        }



    return 0;
}
